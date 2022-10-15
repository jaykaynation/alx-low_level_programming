#include <stdio.h>
/**
 *main - will print single digit numbers
 *
 *Return: 0 for success
 */
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		printf("%i", i);
		i++;
	}
	putchar('\n');

	return (0);
}
