#include "main.h"
#include <fcntl.h>
#include <string.h>
#include <sys/stat.h>
/**
 * create_file - a function that creates a file
 * @filename: name of the file
 * @text_content: string to write in the file
 * Return: returns 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fl;
	ssize_t byt_write;

	if (filename == NULL)
		return (-1);

	fl = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fl == -1)
		return (-1);

	if (text_content != NULL)
	{
		byt_write = write(fl, text_content, strlen(text_content));
		if (byt_write == -1)
		{
			close(fl);
			return (-1);
		}
	}
	close(fl);
	return (1);
}
