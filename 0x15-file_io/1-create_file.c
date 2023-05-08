#include "main.h"

/**
 * create_file - a func that Create a function that creates a file.
 * @text_content: this is the NULL terminated string to write to the file
 * @filename: this is the name of the file to be created
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, 0_CREAT | O_RDWR | O_TRUNCM, 0600);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
