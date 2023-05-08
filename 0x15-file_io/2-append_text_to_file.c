#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * _strlen - a func that finds the lenght of a string
 * @str: this is the pointer to the string
 * Return: the length of the string
 */

size_t _strlen(char *str)
{
	size_t l;

	for (l = 0; str[l]; l++)
		;
	return (l);
}

/**
 * append_text_to_file - a func append_text_to_file
 * @filename: this is the name of the file
 * @text_content: the is the NULL terminated string to add
 * at the end of the file
 * Return: 1 on success and -1 if the program fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int rd;
	ssize_t len;

	if (filename == NULL)
		return (-1);
	rd = open(filename, O_WRONLY | O_APPEND);
	if (rd == -1)
		return (-1);
	if (text_content != NULL)
		len = write(rd, text_content, _strlen(text_content));
	close(rd);
	if (len == -1)
		return (-1);
	return (1);
}



