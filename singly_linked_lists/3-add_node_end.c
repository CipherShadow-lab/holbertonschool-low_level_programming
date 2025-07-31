#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - function adds a node at the end of the list_t list
 * @head: double pointer to head
 * @str: pointer to string
 *
 * Return: new node added to end of list_t list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	unsigned int len = 0;

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);

	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	newNode->len = len;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		list_t *currentNode = *head;

		while (currentNode->next != NULL)
		{
			currentNode = currentNode->next;
		}
		currentNode->next = newNode;
	}
	return (newNode);
}
