#include "main.h"

/**
 * append_text_to_file - appends text at end of a file
 * @filename: filename
 * @text_content: added content
 *
 * Return: if the fail exit 1. if does not exist
 * or if fails -1.
 */

int append_text_to_file(const char *filename, char *text_content)

{
	int d;
	int l;
	int r;

	if (!filename)
		return (-1);
	d = open(filename, O_WRONLY | O_APPEND);

	if (d == -1)
		return (-1);
	if (text_content)
	{
		for (l = 0; text_content[l]; l++)
			;
		r = write(d, text_content, l);
		if (r == -1)
			return (-1);
	}

	close(d);
	return (1);
}
