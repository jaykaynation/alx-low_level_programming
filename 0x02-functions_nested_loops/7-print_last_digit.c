#include "main.h"
/**
 * print_last_digit - will return the value of the last digit of a number
 * @x: is the number in the function
 * Return: 0 on success
 */
int print_last_digit(int x)
{
	x %= 10;
	if (x < 0)
	{
		x = -x;
	}
	_putchar(x + '0');
	return (x);
}
