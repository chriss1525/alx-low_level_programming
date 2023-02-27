#include "function_pointers.h"

/**
 * array_iterator - executes a functionon each element in an array
 * @array: array to be iterated
 * @size: size of the array
 * @action: funtion pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long i;

	if (array != NULL && (*action) != NULL)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
