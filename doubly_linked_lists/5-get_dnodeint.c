#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get-dnodeint_at_index - function returns the nth node of a dlistint_t list
 * @head: pointer to head
 * index: index of node starting from zero
 *
 * Return: NULL if failed
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int indexcounter = 0;

	while (head != NULL)
	{
		if (indexcounter == index)
			return (head);

		head = head->next;
		indexcounter++;
	}
	return (NULL);
}
