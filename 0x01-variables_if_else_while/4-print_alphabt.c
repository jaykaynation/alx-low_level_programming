#include <stdio.h>
/**
 *main - will print all alphabets except q and e
 *
 *Return: 0 for success
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
