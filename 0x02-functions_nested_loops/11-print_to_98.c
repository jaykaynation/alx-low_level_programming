#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - will print from a given number to 98
 * @n: is the number to start printing from
 * Return: 0 on success
 */
void print_to_98(int n)
{
		int x;

	if (n < 98)
	{
		for (x = n; x <= 98; x++)
		{
			printf("%d", x);
			if (x != 98)
			{
				printf(", ");
			}
			else
			{
				printf("\n");
			}
		}
	}
	else if (n == 98)
	{
		printf("%d\n", n);
	}
	else
	{
		for (x = n; x >= 98; x--)
		{
			printf("%d", x);
			if (x != 98)
			{
				printf(", ");
			}
			else
			{
				printf("\n");
			}
		}
	}

}
