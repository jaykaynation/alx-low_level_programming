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
	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
		printf("\n");
	}

	printf("\n");

	return (0);
}
