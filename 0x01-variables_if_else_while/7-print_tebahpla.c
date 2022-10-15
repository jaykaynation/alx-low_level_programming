#include <stdio.h>
/**
 *main - will print lowercase alphabets backwards
 *
 *Return: 0 for success
 */
int main(void)
{
	char x = 'z';

	while (x >= 'a')
	{
		putchar(x);
		x--;
	}
	putchar('\n');

	return (0);
}
