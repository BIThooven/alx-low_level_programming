#include <stdio.h>
#include <stdlib.h>
/**
 * main - a function to calculate the sum
 * @argc: args to count
 * @argv: pointer to the array
 * Return: return 1 when error occurs, return 0 (success)
*/
int main(int argc, char **argv)
{
	int sum = 0, i;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];
		char *endptr = NULL;
		int num = (0);

		if (*arg == '\0')
		{
			printf("Error\n");
			return (1);
		}

		num = strtol(arg, &endptr, 10);

		if (*endptr != '\0')
		{
			printf("Error\n");
			return (1);
		}

		sum += num;
	}

	printf("%d\n", sum);
	return (0);
}
