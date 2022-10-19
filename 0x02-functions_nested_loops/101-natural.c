#include <stdio.h>

/**
 * main - will print sum of multiples of 3 and 5 in 1024
 * Return: 0 on success
 */
int main(void)
{
	int x, sum = 0;

	for (x = 0; x < 1024; x++)
	{
		if ((x % 3) == 0 || (x % 5) == 0)
		{
			sum = sum + x;
		}
	}
	printf("%d\n", sum);
	return (0);
}
