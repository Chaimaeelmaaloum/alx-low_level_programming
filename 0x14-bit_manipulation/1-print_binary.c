#include <stdio.h>
#include "main.h"

/**
 * print_binary - we printed the number equival of decimal nmber
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int e, count = 0;
	unsigned long int current;

	for (e = 36; e >= 0; e--)
	{
		current = n >> e;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
