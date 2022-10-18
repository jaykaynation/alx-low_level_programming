#include "main.h"
/**
 *jack_bauer - will print every minute of the day
 *
 *Return: 0 on success
 */
void jack_bauer(void)
{
	int x, y;

	for (x = 0; x <= 23; x++)
	{
		for (y = 00; y <= 59; y++)
		{
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
			_putchar(':');
			_putchar((y / 10) + '0');
			_putchar((y % 10) + '0');
			_putchar('\n');
		}
	}
}
