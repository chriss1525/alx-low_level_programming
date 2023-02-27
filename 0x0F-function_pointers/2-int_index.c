#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of inegers
 * @size: number of elements in array
 * @cmp: function pointer
 * Return: index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (array && cmp && size)
	{
		for (i = 0; i < size; i++)
		{
			j = cmp(array[i]);

			if (j)
				return (i);
		}
	}
		return (-1);
}
