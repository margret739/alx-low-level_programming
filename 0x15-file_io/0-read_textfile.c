#include "main.h"

/**
 * read_textfile - reads a text file and prints letters
 * @filename: filename
 * @letters: letters printed
 *
 * Return: letters printed if fails , return 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)

{
	int d;
	ssize_t n, r;
	char *fil;

	if (!filename)
		return (0);
	d = open(filename, O_RDONLY);
	if (d == -1)
		return (0);
	fil = malloc(sizeof(char) * (letters));
	if (!fil)
		return (0);
	n = read(d, fil, letters);
	r = write(STDOUT_FILENO, fil, n);

	close(d);

	free(fil);
	return (r);
}
