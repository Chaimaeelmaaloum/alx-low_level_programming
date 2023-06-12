#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_bffr(char *file);
void close_file(int fd);

/**
 * create_bffr - Allocates 1024 bytes for buffer
 * @file: toring chars is the name of the file buffer
 *
 * Return: A pointer to the newly-allocated buffer.
 */

char *create_bffr(char *file)
{
	char *bffr;

	bffr = malloc(sizeof(char) * 1024);

	if (bffr == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (bffr);
}

/**
 * close_file - Close the files descriptor.
 * @fd: The file descriptor be closed.
 */
void close_file(int fd)
{
	int q;

	q = close(fd);

	if (q == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, oo, r, w;
	char *bffr;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	bffr = create_bffr(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, bffr, 1024);
	oo = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(bffr);
			exit(98);
		}

		w = write(oo, bffr, r);
		if (oo == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(bffr);
			exit(99);
		}

		r = read(from, bffr, 1024);
		oo = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(bffr);
	close_file(from);
	close_file(oo);

	return (0);
}
