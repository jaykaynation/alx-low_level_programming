#include "main.h"
/**
 * print_alphabet - will print the alphabet in lowercase
 *
 * Return: 0 on success
 */
void print_alphabet(void)
{
	int x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
