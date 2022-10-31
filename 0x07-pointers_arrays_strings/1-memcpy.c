#include "main.h"

/**
 * _memcpy -  copies memory area from src to dest
 * @dest: destination
 * @src: source
 * @n: max bytes to use
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int m;

	for (m = 0; n > 0 ; m++, n--)
	{
		dest[m] = src[m];
	}

	return (dest);
}

