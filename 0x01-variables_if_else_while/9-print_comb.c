#include <stdio.h>
/**
 *main - will print alll combinations of single digit numbers
 *
 *Return: 0 for success
 */
int main(void)
{
	int x = 0;

	while (x <= 9)
	{
		putchar(x + '0');
		if (x <= 8)
		{
			putchar(',');
			putchar(' ');
		}
		x++;
	}
	putchar('\n');

	return (0);
}
