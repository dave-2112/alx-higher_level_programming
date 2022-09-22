#include "main.h"

/**
 * hash_table_create - creates a has table
 * @size: size of the hash table array
 *
 * Description: creates a hash table having being passes the size
 *
 * Return: new created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table;
	unsigned long int i;

	new_hash_table = malloc(sizeof(hash_table_t));
	if (new_hash_table == NULL)
		return (NULL);

	new_hash_table->size = size;
	new_hash_table->array = malloc(sizeof(hash_table_t *) * size);
	if (new_hash_table->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		new_hash_table->array[i] = NULL;

	return (new_hash_table);
}
