#include <unistd.h>

/**
 * _putchar - writes a characterc to stdout
 * @c: char to be printed
 * Return: On sucess 1
 */
int putchar(char c)
{
	return (write(1, &c, 1));
}

