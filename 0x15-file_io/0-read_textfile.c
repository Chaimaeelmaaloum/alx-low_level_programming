#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile- read the txt file who will be printed to StDOUT
 * @filename: text file who will be reading
 * @letters: numbers of letters who will be reading
 * Return: w- actual number of bytes read and printed
 *      0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *cha;
	ssize_t df;
	ssize_t w;
	ssize_t t;

	df = open(filename, O_RDONLY);
	if (df	== -1)
		return (0);
	cha = malloc(sizeof(char) * letters);
	t = read(df, cha, letters);
	w = write(STDOUT_FILENO, cha, t);

	free(cha);
	close(df);
	return (w);
}
