#include "main.h"
/**
  * print_alphabet_x10 - will print the alphabet 10times to stdout
  *
  * Return: 0 when run
 */
void print_alphabet_x10(void)
{
	int x = 1;
	int y = 'a';

	while (x <= 10)
	{
		while (y <= 'z')
		{
			_putchar(y);
			y++;
		}
		x++;
	}
}
