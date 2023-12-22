#include "hash_tables.h"

/**
 * hash_table_print - fuction to print values in hash table
 * @ht: hash table to be printed
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	char first = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			if (first == 1)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			first = 1;
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
