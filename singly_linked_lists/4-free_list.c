#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - function frees a list_t list
 * @head: head of list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *currentNode;
	list_t *nextNode;

	currentNode = head;

	while (currentNode != NULL)
	{
		nextNode = currentNode->next;
		free(currentNode->str);
		free(currentNode);
		currentNode = nextNode;
	}
}
