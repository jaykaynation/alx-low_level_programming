#include <stdio.h>
/**
 *main - will print all the base16 numbers in lowercase
 *
 *Return: 0 for success
 */
int main(void)
{
	int x = 0;
	char y = 'a';

	while (x <= 9)
	{
		putchar(x + '0');
		x++;
	}

	while (y <= 'f')
	{
		putchar(y);
		y++;
	}
	putchar('\n');

	return (0);
}
