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
	int fd;
	size_t text_len;
	ssize_t bytes_written;

	if (filename == NULL || text_content == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND | O_CREAT, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}

	text_len = strlen(text_content);
	bytes_written = write(fd, text_content, text_len);

	if (bytes_written == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
