#include "hash_tables.h"

/**
 * _strcmp - function compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: 0 if equal
 */
int _strcmp(const char *s1, const char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);

		s1++;
		s2++;
	}

	return (*s1 - *s2);
}

/**
 * hash_table_get - function gets value associated with a key
 * @ht: pointer to hash table
 * @key: key to search for
 *
 * Return: value associated with key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node != NULL)
	{
		if (_strcmp(node->key, key) == 0)
			return (node->value);

		node = node->next;
	}

	return (NULL);
}
