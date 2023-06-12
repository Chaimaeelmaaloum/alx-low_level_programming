#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile- read the txt file who will be printed to StDOUT
 * @filename: text file who will be reading
 * @letters: numbers of letters who will be reading
 * Return: a- actual number of bytes read and printed
 *      0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *cha;
	ssize_t df;
	ssize_t a;
	ssize_t r;

	df = open(filename, O_RDONLY);
	if (df	== -1)
		return (0);
	cha = malloc(sizeof(char) * letters);
	r = read(df, cha, letters);
	a = write(STDOUT_FILENO, cha, r);

	free(cha);
	close(df);
	return (a);
}
