#include <stdio.h>

/**
 * main - prints possible combination of two digits
 * Return: returns 0
 */
int main(void)
{
	int m, n;

	for (m = 0; m < 100; m++)
	{
		for (n = 0; n < 100; n++)
		{
			if (n > m)
			{
				putchar((m / 10) + '0');
				putchar((m % 10) + '0');
				putchar(' ');
				putchar((n / 10) + '0');
				putchar((n % 10) + '0');
				if (i != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
