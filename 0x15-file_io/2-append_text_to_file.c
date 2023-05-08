#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file - appends text in a file
 * @filename: pointer to the file
 * @text_content: string to add at the end
 * Return: if file exists return 1 else -1 if the filename is
 * NULL or if file does not exists and if no permission to write
 */

int append_text_to_file(const char *filename, char *text_content)

{
	int j, k, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	j = open(filename, O_WRONLY | O_APPEND);
	k = write(j, text_content, len);

	if (j == -1 || k == -1)
		return (-1);

	close(j);

	return (1);
}
