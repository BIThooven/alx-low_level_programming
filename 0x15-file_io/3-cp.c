#include "main.h"
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 * main - a program to read from a file and write to another
 * @argc: number of args
 * @argv: strings to be written
 * Return: always 0
*/
int main(int argc, char **argv)
{
	const char *file_from, *file_to;
	int fd_source, fd_dest;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		error_exit(97, "Usage: cp file_from file_to\n", 0);
	}
	file_from = argv[1];
	file_to = argv[2];
	fd_source = open(file_from, O_RDONLY);
	if (fd_source == -1)
	{
		error_exit(98, "Error: Can't read from file %s\n", fd_source);
	}
	fd_dest = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (fd_dest == -1)
	{
		error_exit(99, "Error: Can't write to %s\n", fd_dest);
	}
	bytes_read = read(fd_source, buffer, sizeof(buffer));
	bytes_written = write(fd_dest, buffer, bytes_read);
	while (bytes_read > 0)
	{
		if (bytes_written != bytes_read)
		{
			error_exit(99, "Error: Can't write to %s\n", fd_dest);
		}
	}
	if (bytes_read == -1)
	{
		error_exit(98, "Error: Can't read from file %s\n", fd_source);
	}
	if (close(fd_source) == -1)
	{
		error_exit(100, "Error: Can't close fd %d\n", fd_source);
	}
	if (close(fd_dest) == -1)
	{
		error_exit(100, "Error: Cant't close fd %d\n", fd_dest);
	}
	return (0);
}
