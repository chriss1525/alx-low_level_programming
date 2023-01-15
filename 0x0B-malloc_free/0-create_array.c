#include "main.h"
/**
 *create_array - creates arrays of characters
 *@size: array
 *@c: characters in array
 *Return: pointer to the array (success), Null (fail)
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
