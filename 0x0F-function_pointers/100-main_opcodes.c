#include <stdio.h>
#include <stdlib.h>
/**
 * print_opcodes - a function to print hexadecimal of an int
 * @f_ptr: a pointer to a function
 * @num_bytes: number of bytes
 * Return: void returns nothing
*/
void print_opcodes(unsigned char *f_ptr, int num_bytes)
{
	int i;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", f_ptr[i]);
		if (i < num_bytes - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
}
/**
 * main - a function to print hexadecimal
 * @argc: number of arguments
 * @argv: a pointer to an array
 * Return: returns 0 when success
*/
int main(int argc, char **argv)
{
	int num_bytes;
	unsigned char *main_ptr;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num_bytes = atoi(argv[1]);
	if (num_bytes <= 0)
	{
		printf("Error\n");
		return (2);
	}
	main_ptr = (unsigned char *)main;
	print_opcodes(main_ptr, num_bytes);

	return (0);
}
