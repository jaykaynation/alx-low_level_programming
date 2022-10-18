#include "main.h"
/**
  * print_alphabet_x10 - will print the alphabet 10times to stdout
  *
  * Return: 0 when run
 */
void print_alphabet_x10(void)
{
	int x;
	int y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 'a'; y <= 'z'; y++)
		{
			_putchar(y);
		}
		_putchar('\n');
	}
}
