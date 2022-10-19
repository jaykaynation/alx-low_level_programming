#include <stdio.h>

/**
 * main - will print fibonacci
 * Return: 0 on success
 */

int main(void)
{
	unsigned long int x, y, z, a;

	x = 1;
	y = 1;

	printf("%lu", y);
	for (a = 1; a < 50; a++)
	{
		z = x + y;
		{
			printf(", %lu", z);
		}
		x = y;
		y = z;
	}
	putchar('\n');

	return (0);
}
