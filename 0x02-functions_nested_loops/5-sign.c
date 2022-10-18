#include "main.h"
/**
 * print_sign - will return and print the
 * positive or negative or null sign of a variable
 * @n: is the variable to be checked
 * Return: -1 for less than 0, 0 for 0, 1 for greater than 0
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}
