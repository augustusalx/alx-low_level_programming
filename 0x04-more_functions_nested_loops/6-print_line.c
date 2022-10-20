#include "main.h"

/**
 * print_line - to print straight line using '_'
 * @n: the number of '_' to be printed
 */
void print_line(int n)
{
	int sl;

	if (n > 0)
	{
		for (sl = 0; sl < n; sl++)
			_putchar('_');
	}

	_putchar('\n');
}

