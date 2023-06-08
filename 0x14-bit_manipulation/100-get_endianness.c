#include <stdio.h>
#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0 for big endian, 1 for little endian
 */
int get_endianness(void)
{
	unsigned int e = 1;
	char *c = (char *) &e;

	return (*c);
}
