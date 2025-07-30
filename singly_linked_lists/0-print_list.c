#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - function prints all the elements of a list_t list
 * @h:pointer to head of list_t list
 *
 * Return: number of nodes in list
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");

		else
		{
			printf("[%u] %s\n", temp->len, temp->str);
		}
		count++;
		temp = temp->next;
	}
	return (count);
}
