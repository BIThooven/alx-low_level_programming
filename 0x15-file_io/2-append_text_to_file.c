#include "main.h"
#include <fcntl.h>
#include <string.h>
#include <sys/stat.h>
/**
 * append_text_to_file - a function to append strings to a file
 * @filename: filename to be appended
 * @text_content: string to be written
 * Return: returns 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, byteswritten;
	size_t length;

	length = 0;
	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[length])
		{
			length++;
		}
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	byteswritten = write(fd, text_content, length);

	if (fd == -1 || byteswritten == -1)
		return (-1);

	close(fd);
	return (1);
}
