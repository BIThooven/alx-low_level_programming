#include "main.h"
/**
 * _sqrt - Finds the natural square root of an inputted number.
 * @number: The number to find the square root of.
 * @r: The root to be tested.
 *
 * Return: If the number has a natural square root - the square root.
 *         If the number does not have a natural square root - -1.
 */
int _sqrt(int number, int r)
{

	if (r * r == number)
	{
		return (r);
	}
	else if (r == number / 2)
	{
		return (-1);
	}
	return (_sqrt(number, r + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */

int _sqrt_recursion(int n)
{
	int r = 0;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	return (_sqrt(n, r));
}
