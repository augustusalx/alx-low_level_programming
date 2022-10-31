#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string to be searched
 * @accept: The prefix to be measured
 * Return: The number of bytes
 */
unsigned int _strspn(char *s, char *accept)

{
	unsigned int bytes = 0;
	int ind;

	while (*s)
	{
		for (ind = 0; accept[ind]; ind++)

		{
			if (*s == accept[ind])
			{
				bytes++;
				break;
			}

			else if (accept[ind + 1] == '\0')
				return (bytes);
		}

		s++;
	}

	return (bytes);
}

