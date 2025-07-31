#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - function adds a node at the beginning of the list_t list
 * @head: double pointer to head
 * @str: pointer to string
 *
 * Return: new node added to start of list_t list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);

	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->len = strlen(str);
	newNode->next = *head;

	*head = newNode;

	return (newNode);
}
