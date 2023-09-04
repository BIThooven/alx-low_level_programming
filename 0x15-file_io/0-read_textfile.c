#include "main.h"
#include <fcntl.h>
/**
 * read_textfile - a function that reads a text file
 * @filename: the file name
 * @letters:  the number of letters it should read and print
 * Return: returns the actual number of letters
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t bytread, bytwrite;
	int f;

	if (filename == NULL)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
	{
		return (0);
	}
	buffer = (char *)malloc(letters + 1);
	if (buffer == NULL)
	{
		close(f);
		return (0);
	}
	bytread = read(f, buffer, letters);
	if (bytread <= 0)
	{
		close(f);
		free(buffer);
		return (0);
	}
	buffer[bytread] = '\0';
	bytwrite = write(STDOUT_FILENO, buffer, bytread);
	if (bytwrite < bytread)
	{
		close(f);
		free(buffer);
		return (0);
	}
	close(f);
	free(buffer);
	return (bytread);
}
