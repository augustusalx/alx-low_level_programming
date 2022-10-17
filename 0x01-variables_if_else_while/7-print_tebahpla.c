#include <stdio.h>

/**
 * main - to print the alphabet in reverse
 * Return: Always 0
 */
int main(void)
{
	char pr;

	for (pr = 'z'; pr >= 'a'; pr--)
		putchar(pr);

	putchar('\n');

	return (0);
}

