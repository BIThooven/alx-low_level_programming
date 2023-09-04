#include "main.h"
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 * creat_buff - a function to write standard error
 * @f: the file
 * Return: void returns nothing
*/
char *creat_buff(char *f)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f);
		exit(99);
	}
	return (buffer);
}
/**
 * close_file - a function that closes a file
 * @fd: file to be closed
 * Return: void returns nothing
*/
void close_file(int fd)
{
	int cl;

	cl = close(fd);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - a program to read from a file and write to another
 * @argc: number of args
 * @argv: strings to be written
 * Return: always 0
*/
int main(int argc, char **argv)
{
	int file_from, file_to, bytes_read, bytes_written;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file file_from file_to\n");
		exit(97);
	}
	buffer = creat_buff(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	bytes_read = read(file_from, buffer, );
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (file_from == -1 || bytes_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		bytes_written = write(file_to, buffer, bytes_read);
		if (file_to == -1 || bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		bytes_read = read(file_from, buffer, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (bytes_read > 0);
	free(buffer);
	close_file(file_from);
	close_file(file_to);
	return (0);
}
