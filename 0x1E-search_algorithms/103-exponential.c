#include "search_algos.h"
/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located, or -1 on failure
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, min = 0, max = 0;

	if (array == NULL)
		return (-1);
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	min = bound / 2;
	max = (bound < size - 1) ? bound : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", min, max);
	return (binary_search(array + min, max - min + 1, value) + min);
}
