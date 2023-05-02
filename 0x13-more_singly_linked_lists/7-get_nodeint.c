#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - a func that returns the nth
 *  node of a listint_t linked list
 *  @head: this is the pointer to the first node
 *  @index: is the index of the node, starting at 0
 *  Return: if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int g;

	if (head == NULL)
		return (NULL);
	for (g = 0; g < index; g++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
