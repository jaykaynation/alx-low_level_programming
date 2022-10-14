#include <stdio.h>
/**
 * main - will print all possible combinations of 2 digits
 *
 * Return: 0 for success
 */
int main(void)
{
	int x, y, z;

	x = 0;

	while (i < 100)
	{
		y = x % 10; /* singles digit */
		z = x / 10; /* doubles digit */

		if (z < y)
		{
			putchar(z + '0');
			putchar(y + '0');

			if (x < 89)
			{
				putchar(44);
				putchar(32);
			}
		}

		x++;
	}
	putchar('\n');

	return (0);
}
