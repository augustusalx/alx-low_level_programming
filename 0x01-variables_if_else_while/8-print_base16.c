#include <stdio.h>

/**
 * main - prints the numbers in base 16
 * Return: Always 0
 */
int main(void)
{
	int num;
	char pn;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (pn = 'a'; pn <= 'f'; pn++)
		putchar(pn);

	putchar('\n');

	return (0);
}

