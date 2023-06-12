#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * crate_file - for create files.
 * @filename: the pointer to the name of file who want to create
 * @text_file: pointer to string to write the file;
 *
 * Return: if the function fails - -1.
 *	otherwise -1.
 */

int create_file(const char *filename, char *text_content)
{
	int df, a, ren = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (ren = 0; text_content[ren];)
			ren++;
	}

	df = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	a = write(df, text_content, ren);

	if (df == -1 || a == -1)
		return (-1);

	close(df);

	return (1);
}
