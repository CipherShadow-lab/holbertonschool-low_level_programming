#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - function frees a dlistint_t list
 * @head: pointer to head
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *currentNode;
	dlistint_t *nextNode;

	currentNode = head;

	while (currentNode != NULL)
	{
		nextNode = currentNode->next;
		free(currentNode);
		currentNode = nextNode;
	}
}
