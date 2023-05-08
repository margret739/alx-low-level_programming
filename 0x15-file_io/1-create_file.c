#include "main.h"
#include <stdio.h>

/**
 * create_file - creates a file
 * @filename: pointer to the file to creat
 * @text_content: pointer to a string to write to the file
 * Return: if the function fails --1, else -1.
 */

int create_file(const char *filename, char *text_content)

{
	int fn, s, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fn = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	s = write(fn, text_content, len);

	if (fn == -1 || s == -1)
		return (-1);

	close(fn);
	return (1);
}
