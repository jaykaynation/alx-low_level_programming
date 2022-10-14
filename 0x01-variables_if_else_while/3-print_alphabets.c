#include <stdio.h>
/**
 * main - will print alphabets in lowercase the uppercase
 *
 * Return: 0 for success
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	char c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	return (0);
}
