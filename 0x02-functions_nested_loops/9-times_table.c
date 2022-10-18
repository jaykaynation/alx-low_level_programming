#include "main.h"
/**
 * times_table - will print the 9 times table
 *
 * Return:0 on success
 */
void times_table(void)
{
	int x, y, z;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			z = x * y;
			if (y == 0)
			{
				_putchar(x + '0');
			}
			else
			{
				if (x < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(x + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar((x / 10) + '0');
					_putchar((x % 10) + '0');
				}
			}
		}
		_putchar('\n');
	}
}
