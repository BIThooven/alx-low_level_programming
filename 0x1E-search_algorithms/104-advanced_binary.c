#include "search_algos.h"
/**
 * advanced_binary - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the index where value is located, -1 if value is not present in
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t left;
	size_t right;
	size_t mid, i;

	if (array == NULL || value == 0 || size == 0)
		return (-1);

	for (left = 0, right = size - 1; left <= right;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		mid = (left + right) / 2;
		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
		{
			if (array[mid - 1] == value)
				right = mid;
			else
				return (mid);
		}
	}
	return (-1);
}
