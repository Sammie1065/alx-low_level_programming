#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - a func that prints all the elements of a listint_t list
 * @h: this is the head of the linklist node
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
