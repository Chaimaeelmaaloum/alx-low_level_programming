#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - convert the binary number to an unsigned int
 * @b: string containing the binary number
 *
 * Return: number has been converted
 */
unsigned int binary_to_uint(const char *b)
{
	int e;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (e = 0; b[e]; e++)
	{
		if (b[e] < '0' || b[e] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[e] - '0');
	}

	return (dec_val);
}
