#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - a func that reverses a listint_t linked list
 * @head: this is the double pointer
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *initial, *next;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	initial = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = initial;
		initial = *head;
		*head = next;
	}
	*head = initial;
	return (*head);
}
