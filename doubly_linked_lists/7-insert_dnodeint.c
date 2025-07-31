#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - function inserts a new node at a given position
 * @h: double pointer to head
 * @idx: index to insert
 * @n: value to insert
 *
 * Return: NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode = NULL;
	dlistint_t *current = *h;
	unsigned int index = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (current != NULL && index < idx - 1)
	{
		current = current->next;
		index++;
	}

	if (current == NULL)
		return (NULL);

	if (current->next == NULL)
		return (add_dnodeint_end(h, n));

	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = current->next;
	newNode->prev = current;

	current->next->prev = newNode;
	current->next = newNode;

	return (newNode);
}
