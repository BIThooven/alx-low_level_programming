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
	if (array == NULL || size == 0)
		return (-1);
	return (recursive_search(array, 0, size - 1, value));
}
/**
 * recursive_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @left: left index
 * @right: right index
 * @value: value to search for
 * Return: the index where value is located, -1 if value is not present in
 */
int recursive_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (left == right)
	{
		if (array[left] == value)
			return (left);
		return (-1);
	}
	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
			printf(", ");
	}
	printf("\n");
	i = left + (right - left) / 2;
	if (array[i] == value)
	{
		if (array[i - 1] < value)
			return (i);
	}
	if (array[i] < value)
		return (recursive_search(array, i + 1, right, value));
	return (recursive_search(array, left, i, value));
}
