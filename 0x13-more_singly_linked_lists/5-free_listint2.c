#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - a func that frees a listint_t list.
 * @head: a double pointer of the list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		next = (head)->next;
		free(head);
		*head = next;
	}
}
