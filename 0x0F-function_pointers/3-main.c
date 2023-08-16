#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - a function that does calculus operations
 * @argc: number of operations
 * @argv: characters to be converted to integers
 * Return: returns 0 when success and 99 or 100 or 98 when error occurs
*/
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *operator;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	if (num2 == 0 && (*operator == '/' || *operator == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	operation = get_op_func(operator);

	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = operation(num1, num2);
	printf("%d\n", result);

	return (0);
}

