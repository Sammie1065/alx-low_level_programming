#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop - a func that finds the loop in a linked list.
 * @head: this is the pointer to the beginning of the list
 * Return: The address of the node where the loop starts,
 *  or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *lastcard, *love;

	lastcard = love = head;
	while (lastcard && love && love->next)
	{
		lastcard = lastcard->next;
		love = love->next->next;
		if (lastcard == love)
		{
			lastcard = head;
			break;
		}
	}
	if (!lastcard || !love || !love->next)
		return (NULL);
	while (lastcard != love)
	{
		lastcard = lastcard->next;
		love = love->next;
	}
	return (love);
}
