#include "main.h"

/**
 * string_toupper - changes lowercase to uppercase
 * @n: pointer
 * Return: char
 */
char *string_toupper(char *n)
{
	int p;

	p = 0;
	while (n[p] != '\0')
	{
		if (n[p] >= 'a' && n[p] <= 'z')
			n[p] = n[p] - 32;
		p++;
	}
	return (n);
}
