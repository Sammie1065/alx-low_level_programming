#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - a func that deletes the head node of a listint_t
 *  linked list, and returns the head node’s data (n)
 *  @head: the double pointer
 *  Return: if empty return 0
 */

int pop_listint(listint_t **head)
{
	listint_t *commence;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	commence = *head;
	*head = commence->next;
	n = commence->n;
	free(commence);
	return (n);
}
