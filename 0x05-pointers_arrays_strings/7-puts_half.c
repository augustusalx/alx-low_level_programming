#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: input
 */
void puts_half(char *str)
{
	int t = 0;

	while (*str != '\0')
	{
		t++;
		str++;
	}

	str -= (t / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n')
}

