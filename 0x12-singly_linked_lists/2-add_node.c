#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - a func that returns the length of a string
 * @s: this is a char
 * Return: value is i
 */

int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * add_node - a func that adds a new node
 *  at the beginning of a list_t list.
 * @head: head of a list_t list
 * @str: value needs to be duplicated
 * Return: the num of nodes
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	add = malloc(sizeof(list_t));
	if (add != NULL)
		add->str = strdup(str);
	else
		return (NULL);

	add->len = _strlen(str);
	add->next = *head;
	*head = add;

	return (add);
}
