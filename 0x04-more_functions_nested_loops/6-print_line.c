#include "main.h"

/**
 * print_line - will print a straight line
 * @n: integer to print
 * Return: void
 */

void print_line(int n)
{
	int x = 0;

	while ((x < n) && (n > 0))
	{
		_putchar('_');
		x++;
	}
	_putchar('\n');
}
