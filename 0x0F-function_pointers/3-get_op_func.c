#include "3-calc.h"

/**
 * get_op_func - selects function to perform the operation
 * @s: char operator
 * Return: pointer to the function that corresponds to the operator
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int m = 0;

	while (m < 10)
	{
		if (s[0] == ops->op[m])
			break;
		m++;
	}

	return (ops[m / 2].f);
}

