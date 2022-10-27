#include "main.h"

/**
 * _strcmp - compares two strings values
 * @s1: string 1
 * @s2: string 2
 * Return: the difference in s1 and s2
 */
int _strcmp(char *s1, char *s2);
{
	int t;

	t = 0;
	while (s1[t] != '\0' && s2[t] != '\0')
	{
		if (s1[t] != s2[t])
		{
			return (s1[t] = s2[t]);
		}
	t++;
	}
	return (0);
}
