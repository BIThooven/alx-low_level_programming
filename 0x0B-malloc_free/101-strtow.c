#include <stdlib.h>
#include <string.h>
#include "main.h"
char **strtow(char *str)
{
	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	int num_words;
	char *p;
	int index;
	char *start;
	int i;
	int length;
	char **result;

	num_words = 0;
	i = 0;
	p = str;

	while (*p)
	{
		if (*p != ' ' && (*p == '\t' || *(p + 1) == ' ' || *(p + 1) == '\t' || *(p + 1) == '\n' || *(p + 1) == '\0'))
		{
			num_words++;
		}
		p++;
	}

	result = (char **)malloc((num_words + 1) * sizeof(char *));

	if (result == NULL)
	{
		return (NULL);
	}

	index = 0;
	p = str;
	start = (NULL);

	while (*p)
	{
		if (*p != ' ')
		{
			if (!start)
			{
				start = p;
			}
		}
		else
		{
			if (start)
			{
				length = p - start;
				result[index] = (char *)malloc((length + 1) * sizeof(char));
				if (result[index] == NULL)
				{
					for (i = 0; i < index; i++)
					{
						free(result[i]);
					}
					free(result);
					return (NULL);
				}
				strncpy(result[index], start, length);
				result[index][length] = '\0';
				index++;
				start = NULL;
			}
		}
		p++;
	}

	if (start)
	{
		length = p - start;
		result[index] = (char *)malloc((length + 1) * sizeof(char));
		if (result[index] == NULL)
		{
			for (i = 0; i < index; i++)
			{
				free(result[i]);
			}
			free(result);
			return (NULL);
		}
		strncpy(result[index], start, length);
		result[index][length] = '\0';
		index++;
	}

	result[index] = NULL;

	return (result);
}
