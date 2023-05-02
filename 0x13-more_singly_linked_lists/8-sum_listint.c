#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - a func that returns the sum of all the
 *  data (n) of a listint_t linked list.
 *  @head: this is the pointer to the first node
 *  Return: if the list is empty, return 0
 */

int sum_listint(listint_t *head)
{
	int add = 0;

	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
