#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - prints to STDOUT
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: if file cant open or read or if write fails or
 * doeas not write expected amount of bytes return 0, else
 * if filename is NULL return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)

{
	char *let;
	ssize_t fl;
	ssize_t s;
	ssize_t t;

	fl = open(filename, O_RDONLY);
	if (fl == -1)
		return (0);
	let = malloc(sizeof(char) * letters);
	t = read(fl, let, letters);
	s = write(STDOUT_FILENO, let, t);

	free(let);
	close(fl);
	return (s);
}
