#include "hash_tables.h"

/**
 * _strdup - function duplicates string
 * @str: string to duplicate
 *
 * Return: pointer to new string
 */
char *_strdup(const char *str)
{
	char *copy;
	unsigned int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	copy = malloc(sizeof(char) * (len + 1));

	if (copy == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		copy[i] = str[i];

	copy[len] = '\0';

	return (copy);
}

/**
 * _strcmp - function compares two strings
 * @s1: first string
 * @s2: second string
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
 * create_node - function creates a new hash node
 * @key: key of key/value pair
 * @value: value of key/value pair
 *
 * Return: new node
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node;
	char *dup_key;
	char *dup_value;

	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (NULL);

	dup_key = _strdup(key);
	dup_value = _strdup(value);

	if (dup_key == NULL || dup_value == NULL)
	{
		free(dup_key);
		free(dup_value);
		free(new_node);
		return (NULL);
	}

	new_node->key = dup_key;
	new_node->value = dup_value;
	new_node->next = NULL;

	return (new_node);
}

/**
 * hash_table_set - function adds an element to the hash table
 * @ht: hash table to add key/value pair to
 * @key: key to add
 * @value: value associated with key
 *
 * Return: 1 if successful, otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *dup_value;
	hash_node_t *node, *new_node;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	if (*key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node != NULL)
	{
		if (_strcmp(node->key, key) == 0)
		{
			dup_value = _strdup(value);
			if (dup_value == NULL)
				return (0);

			free(node->value);
			node->value = dup_value;
			return (1);
		}

		node = node->next;
	}

	new_node = create_node(key, value);

	if (new_node == NULL)
		return (0);

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
