#include "hash_tables.h"
/**
 * hash_table_print - prints hash table
 * @ht: hashtable
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long i;
	hash_node_t *current;
	char dict[1024] = "";
	char tmp[100] = "";

	if (!ht)
	{
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			sprintf(tmp, "%s: %s, ", current->key, current->value);
			strcat(dict, tmp);
			current = current->next;
		}
	}
	if (strlen(dict) > 2)
	{
		dict[strlen(dict) - 2] = '\0';
	}
	printf("{%s}\n", dict);
}
