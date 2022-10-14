#include <stdio.h>
/**
 *main - print single digits base 10 numbers with putchar
 *
 *Return: 0 for success
 */
int main(void)
{
	int x = 0;

	while (x <= 9)
	{
		putchar(x);
		x++;
	}
	putchar('\n');

	return (0);
}
