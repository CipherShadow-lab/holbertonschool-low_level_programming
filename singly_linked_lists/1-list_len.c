#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - function returns the number of elements in a linked list_t list
 * @h: pointer to head
 *
 * Return: number of elements in the list_t list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *currentNode = h;

	while (currentNode != NULL)
	{
		count++;
		currentNode = currentNode->next;
	}
	return (count);
}
