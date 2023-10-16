#include <stdio.h>
/**
 * add - a function to add a to b
 * @a: integer to be added to
 * @b: integer to be added to
 * Return: returns the addition
*/
int add(int a, int b)
{
	return (a + b);
}
/**
 * sub - a function to sub a from b
 * @a: integer to be subbed from
 * @b: integer to sub from a
 * Return: returns the sub
*/
int sub(int a, int b)
{
	return (a - b);
}
/**
 * mul - a function to mul a and b
 * @a: integer to be multiplied to
 * @b: integer to be multiplied to
 * Return: returns the multiple
*/
int mul(int a, int b)
{
	return (a * b);
}
/**
 * div - a function to div a on b
 * @a: integer to be divided
 * @b: integer to be divided on
 * Return: returns the division
*/
int div(int a, int b)
{
	if (b == 0)
	{
		printf("error: Division by 0\n");
		return (0);
	}
	return (a / b);
}
/**
 * sub - a function to sub a from b
 * @a: integer to be divided from
 * @b: integer to divide on
 * Return: returns the modulo
*/
int mod(int a, int b)
{
	if (b == 0)
	{
		printf("error: Division by zero\n");
		return (0);
	}
	return (a % b);
}
