#include "hash_tables.h"
/**
 * hash_table_get - gets a value associated with a key
 * @ht: hash table
 * @key: key
 * Return: value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;

	node = ht->array[key_index((unsigned char *)key, ht->size)];

	while (node)
	{
		if (strcmp(key, node->key) == 0)
			return (node->value);

		node = node->next;
	}
	return (NULL);
}
