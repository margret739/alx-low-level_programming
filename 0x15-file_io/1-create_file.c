#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: content in the file
 *
 * Return: 1 if success -1 if fail.
 */

int create_file(const char *filename, char *text_content)

{
	int d;
	int n;
	int r;

	if (!filename)
		return (-1);
	d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (d == -1)
		return (-1);
	if (!text_content)
		text_content = "";

	for (n = 0; text_content[n]; n++)
		;
	r = write(d, text_content, n);
	if (r == -1)
		return (-1);
	close(d);
	return (1);
}
