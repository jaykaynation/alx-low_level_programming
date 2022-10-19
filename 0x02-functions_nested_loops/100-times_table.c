#include "main.h"
#include <stdio.h>

/**
 * print_times_table - will print times table less than 15
 * and greater than 0
 * @n: number to print time table to
 * Retutn: void
 */

void print_times_table(int n)
{
	int x, y;

	if (n > 15 || n < 0)
	{
		return;
	}
	else
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				if ((x * y) > 0)
				{
					if ((x * y) > 9 && (x * y) <= 99)
					{
						printf(",  %d", x * y);
					}
					else if ((x * y) > 99)
					{
						printf(", %d", x * y);
					}
					else
					{
						printf(",   %d", x * y);
					}
				}
				else
				{
					printf("%d", x * y);
					if (y != n && x == 0)
					{
						printf(",   ");
					}
				}
			}
			printf("\n");
		}
	}
}
