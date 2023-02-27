#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element of an array
 * @array: arra to be iterated
 * @size: size of the array
 * @action: funtion pointer
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
    unsigned long i;

    for (i = 0; i < size; i++)
    {
        (*action)(array[i]);
    }
}