#include "main.h"
/**
 *jack_bauer - will print every minute of the day
 *
 *Return: 0 on success
 */
void jack_bauer(void)
{
	int x, y;

	for (x = 0; x <= 24; x++)
	{
		for (y = 00; y <= 59; y++)
		{
			putchar(x);
			putchar(':');
			putchar(y);
		}
	}

	return (0);
}
