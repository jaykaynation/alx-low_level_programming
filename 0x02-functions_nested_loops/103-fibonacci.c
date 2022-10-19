#include <stdio.h>

/**
 * main - will print the sum of even fibonacci
 * Return: 0 on success
 */

int main(void)
{
	unsigned long int x, y, z, a, sum;

	sum = 0;
	x = 0;
	y = 1;

	for (a = 0;; a++)
	{
		z = x + y;
		if (z < 4000000)
		{
			if ((z % 2) == 0)
			{
				sum = sum + z;
			}
		}
		else
		{
			break;
		}
		x = y;
		y = z;
	}
	printf("%lu\n", sum);
	return (0);
}
