#include <stdio.h>

/**
 * main - will print numbers from 1 to 100 but will print
 * fizz for multiples of 3 and buzz for multiples of 5
 * and fuzzbuzz for multiples of 3 and 5
 *
 * Return: 0 for success
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if ((x % 3) == 0)
		{
			if (((x % 3) == 0) && ((x % 5) == 0))
			{
				printf("FizzBuzz ");
			}
			else
			{
				printf("Fizz ");
			}
		}
		else if ((x % 5) == 0)
		{
			printf("Buzz");
			if (x != 100)
			{
				printf(" ");
			}
		}
		else
		{
			printf("%d ", x);
		}
	}
	putchar('\n');
	return (0);
}
