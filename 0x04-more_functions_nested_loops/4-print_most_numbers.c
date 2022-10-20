#include "main.h"

/**
 * print_most_numbers - print the numbers 0 to 9
 * without 2 and 4
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int m = 0;

	while  (m < 10)
	{
		if (m != 2 && m != 4)
			_putchar(m + '0');

		m++;
	}
	_putchar('\n');
}

