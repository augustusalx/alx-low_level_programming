#include "main.h"

/**
 * is_divisible - Checks whether a number is divisible
 * @num: The number to be checked
 * @div: The divisor
 * Return: 1 if prime, 0 if not
 */
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}

