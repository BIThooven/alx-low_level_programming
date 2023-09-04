#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
# define BUFFER_SIZE 1024
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
/**
 * error_exit - a function to write standard error
 * @message: error message to be shown
 * @fd: arguments
 * @code: integer for exit status
 * Return: void returns nothing
*/
void error_exit(int code, const char *message, int fd)
{
	dprintf(STDERR_FILENO, message, fd);
	exit(code);
}
#endif
