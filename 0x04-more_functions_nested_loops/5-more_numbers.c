#include "main.h"

/**
 * more_numbers - to print from 0 to 14 ten times
 * Return: Always 0
 */
void more_numbers(void)
{
	int num, n;

	for (n = 0; n <= 9; n++)
	{
		if (num > 9)
		{
			_putchar((num / 10) + '0');
		}
		_putchar((num % 10) + '0');
	}

	_putchar('\n');
}

