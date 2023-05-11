#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
 * create_file - a func that Create a function that creates a file.
 * @text_content: this is the NULL terminated string to write to the file
 * @filename: this is the name of the file to be created
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, ssize_t w, int size, char *mem;

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, 0_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	size = _strlen(text_content);
	mem = malloc(sizeof(char) * size);
	if (!mem)
	{
		close(fd);
		return (-1);
	}
	w = write(fd, text_content, size);
	if (w == -1)
	{
		close(fd);
		free(mem);
		return (-1);
	}
	close(fd);
	free(mem);
	return (1);
}

/**
 * _strlen - len
 * @s: this is the pointer to a char
 * Return: 0
 */

int _strlen(const char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}

	return (i);
}


