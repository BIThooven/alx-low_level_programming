#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that returns the multiple of 2 args
 * @argc:args to count
 * @argv: pointer to the array of strings
 * Return: always 0 in case of success
*/
int main(int argc, char **argv)
{
	int mul = 1;
	int i;

	if (argc < 1)
	{
		perror("error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
	}
	printf("%d\n", mul);
	return (0);
}
