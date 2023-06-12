#include "main.h"

/**
 * append_text_to_file : appends text to a file.
 * @filename: pointer to the name of file.
 *
 * @text_content: the string will be add to the end of the file.
 * Return:1 on sucess and  if the filname is NULL - -1 or function fails
 *      if the file doesn't exist lacks write permission
 *      otherwise -1
 */

int append_text_to_file(const char *filename, char *text_content);
{
	int z, a, ren = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (ren = 0; text_content[ren];)
			ren++;
	}

	z = open(filename, O_WRONLY | O_APPEND);
	a = write(z, text_content, ren);

	if (z == -1 || a == -1)
		return (-1);

	close(z);

	return (1);
}
