#include "hash_tables.h"
/**
 * hash_table_delete - deletes hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node;
	hash_node_t *temp;
	unsigned long i = 0;

	if (!ht)
	{
		return;
	}
	while (i < ht->size)
	{
		if (ht->array[i])
		{
			node = ht->array[i];
			while (node)
			{
				temp = node;
				node = temp->next;

				free(temp->key);
				free(temp->value);
				free(temp);
			}
		}
		i++;
	}
	free(ht->array);
	free(ht);
}