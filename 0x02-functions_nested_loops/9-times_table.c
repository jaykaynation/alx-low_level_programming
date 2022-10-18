#include "main.h"
/**
 * times_table - will print the 9 times table
 *
 * Return:0 on success
 */
void times_table(void)
{
	int x = 9;

	int y = 0;

	for (y = 0; y <= 9; y++)
	{
		int z = x * y;

		putchar(z + '0');
		putchar('\n');
	}
}
