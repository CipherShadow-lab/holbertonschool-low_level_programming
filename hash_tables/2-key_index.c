#include "hash_tables.h"

/**
 * key_index - function the index of a key in hash table
 * @key: key to hash
 * @size: size of hash table array
 *
 * Return: index where the key/value pair is stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
