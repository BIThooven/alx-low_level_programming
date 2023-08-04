#include <stdio.h>
#include <stdlib.h>
/**
* main - a function for the prompt to print what's entered
*@argc : arguments count
*@argv : pointer to the array of strings
*Return: Alwyas 0 indicating success
*/
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	exit(EXIT_SUCCESS);
}
