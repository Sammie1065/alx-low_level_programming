#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - a func that measures the lenght of a string
 * @str: the string
 * Return: lenght of the string
 */

unsigned int _strlen(char *str)
{
	unsigned int l;

	for (l = 0; str(l); l++)
		;
	return (l);
}

/**
 * add_node_end - a func that adds a new node
 *  at the end of a list_t list.
 * @head: this is a double pointer to the linked list
 * @str: strings needs to be duplicated
 * Return: he address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new != NULL)
		new->str = strdup(str);
	else
		return (NULL);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(new->str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	return (new);
}
