#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int find_len(char *str);
char *create_xarray(int size);
char *iterate_zeroes(char *str);
void get_prod(char *prod, char *mult, int digit, int zeroes);
void add_nums(char *final_prod, char *next_prod, int next_len);

/**
 * find_len - Finds the length of a string
 * @str: The string to be measured
 * Return: The length of the string
 */
int find_len(char *str)
{
	int lenght = 0;

	while (*str++)
		lenght++;

	return (lenght);
}

/**
 * create_xarray - Creates an array of chars
 * @size: The size of the array to be initialized
 * Description: The unction exits with a status of 98 for insufficient space
 *  Return: A pointer to the array
 */
char *create_xarray(int size)
{
	char *array;
	int index;

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		exit(98);

	for (index = 0; index < (size - 1); index++)
		array[index] = 'x';
	array[index] = '\0';

	return (array);
}

/**
 * iterate_zeroes - Iterates through a string of numbers
 * @str: The string of numbers to be iterate through
 * Return: A pointer to the next non-zero element
 */
char *iterate_zeroes(char *str)
{
	while (*str && *str == '0')
		str++;

	return (str)
}

/**
 * get_digit - Converts a digit character to a corresponding int
 * @c: The character to be converted
 * Description: If c is a non-digit, the function exits with a status of 98
 * Return: The converted int
 */
int get_digit(char c)
{
	int digit = c - '0';

	if (digit < 0 || digit > 9)
	{
		printf("Error\n");
		exit(98);
	}

	return (digit);
}

/**
 * get_prod - Multiplies a string of numbers by a single digit
 * @prod: The buffer to store the result
 * @mult: The string of numbers
 * @digit: The single digit
 * @zeroes: The necessary number of leading zeroes
 * Description: The function exits with a status value of 98 WITH a non-digit
 */
void get_prod(char *prod, char *mult, int digit, int zeroes)
{
	int mult_len, num, tens = 0;

	mult_len = find_len(mult) - 1;
	mult += mult_len;

	while (*prod)
	{
		*prod = 'x';
		prod++;
	}

	prod--;

	while (zeroes--)
	{
		*prod = '0';
		prod--;
	}

	for (; mult_len >= 0; mult_len--, mult--, prod--)
	{
		if (*mult < '0' || *mult > '9')
		{
			printf("Error\n");
			exit(98);
		}

		num = (*mult - '0') * digit;
		num += tens;
		*prod = (num % 10) + '0';
		tens = num / 10;
	}

	if (tens)
		*prod = (tens % 10) + '0';
}

/**
 * add_nums - Adds the numbers stored in two strings
 * @final_prod: The buffer storing the running final product
 * @next_prod: The next product to be added
 * @next_len: The length of next_prod
 */
void add_nums(char *final_prod, char *next_prod, int next_len)
{
	int num, tens = 0;

	while (*(final_prod + 1))
		final_prod++;

	while (*(next_prod + 1))
		next_prod++; for (; *final_prod != 'x'; final_prod--) { num = (*final_prod - '0') + (*next_prod - '0'); num += tens; *final_prod = (num % 10) + '0';
		tens = num / 10;

		next_prod--;
		next_len--;
	}

	for (; next_len >= 0 && *next_prod != 'x'; next_len--)