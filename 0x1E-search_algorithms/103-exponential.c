#include "search_algos.h"
/**
 * exponential_search - uses exponential search to search
 * for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 * Return: first index where value is located or -1 if not found
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, j = 0, min = 0, max = 0;

	if (array == NULL || size == 0)
		return (-1);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i *= 2;
	}

	if (i < size)
		max = i;
	else
		max = size - 1;

	min = i / 2;

	printf("Value found between indexes [%lu] and [%lu]\n", min, max);

	for (j = min; j <= max; j++)
	{
		printf("Value checked array[%lu] = [%d]\n", j, array[j]);
		if (array[j] == value)
		{
			return (j);
		}
	}
	return (-1);
}
