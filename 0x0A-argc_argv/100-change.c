#include <stdio.h>
#include <stdlib.h>
/**
 * main - function to calculate probability of an event
 * @argc: arguments count
 * @argv: pointer to the array
 * Return: return 1 in case of error, 0 in case of success
*/
int main(int argc, char **argv)
{
	int cents, num_coins;
	unsigned long i;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	num_coins = 0;

	for (i = 0; i < sizeof(coins) / sizeof(coins[0]); i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			num_coins++;
		}
	}

	printf("%d\n", num_coins);
	return (0);
}
