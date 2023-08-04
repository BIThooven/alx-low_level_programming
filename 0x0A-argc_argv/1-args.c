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
	char **unused_argv __attribute__((unused)) = argv;

	printf("%d\n", argc - 1);

	return (0);
}
