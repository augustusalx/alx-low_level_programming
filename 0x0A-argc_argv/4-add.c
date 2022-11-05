#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check - string there are digit
 * @str: array str
 * Return: Always 0
 */
int check_num(char *str)
{
	/*Declaring variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*count string*/

	{
		if (!isdigit(str[count])) /*check if str there are digit*/
		{
			return (0);
		}

		count++;
	}
	return (1);
}

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	/*Declaring variables*/
	int ct;
	int str_to_int;
	int sm = 0;

	ct = 1;
	while (ct < argc) /*Goes through the whole array*/
	{
		if (check_num(argv[ct]))
		{
	str_to_int = atoi(argv[ct]); /*ATOI --> convert string to int*/
	sm += str_to_int;
		}

	/*Condition if one of the number contains symbols that are not digits*/
		else
		{
			printf("Error\n");
			return (1);
		}

		ct++;
	}

	printf("%d\n", sm); /*print sm*/

	return (0);
}

