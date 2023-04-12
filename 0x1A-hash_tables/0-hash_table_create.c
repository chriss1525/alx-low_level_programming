#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 *
 * @size: size of the table
 *
 * Return: new hashtable
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *array = malloc(sizeof(hash_table_t));

	if (!array)
	{
		return (NULL);
	}
	array->size = size;
	array->array = malloc(sizeof(hash_node_t *) * size);
	if (!array->array)
	{
		return (NULL);
	}
	while (size--)
	{
		array->array[size] = NULL;
	}
	return (array);
}
