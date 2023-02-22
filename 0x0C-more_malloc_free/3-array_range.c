#include "main.h"

/**
 * array_range - creates an array of integers
 *
 * @min: starting value to include in the array
 * @max: ending value to include in the array
 *
 * Return: an array of integers
 */
int *array_range(int min, int max)
{
	int *array, length, i;

	if (min > max)
		return (NULL);

	length = max - min + 1;

	array = malloc(length * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		*(array + i) = min + i;

	return (array);
}
