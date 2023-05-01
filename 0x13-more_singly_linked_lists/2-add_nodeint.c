#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - a func that adds a new node at the
 *  beginning of a listint_t list
 *  @head: this is the head of the double pointer
 *  @n: int to be added to the list
 *  Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	if (head != NULL)
		ptr = malloc(sizeof(listint_t));
	else
		return (NULL);
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
