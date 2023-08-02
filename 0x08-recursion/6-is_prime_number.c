#include "main.h"
/**
 * _check_prime - function to check for prime numbers.
 * @n : numbers to search through for prime numbers.
 * @i : index
 * Return: the recursive call for the _check_prime function (success)
*/
int _check_prime(int n, int i)
{
	if (n < 2)
	{
		return (0);
	}
	else if (i == 1)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (_check_prime(n, i - 1));
	}
}
/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n < 0)
	{
		return (0);
	}
	return (_check_prime(n, n - 1));
}
