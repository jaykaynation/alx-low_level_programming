#include "main.h"

/**
 * reverse_array - will reverse an array of integers
 * @a: array of intergers to be reversed
 * @n: number of elements in the array of intergers
 */
void reverse_array(int *a, int n)
{
	int x, y, tmp;

	y = n - 1;

	for (x = 0; x < n / 2; x++)
	{
		tmp = a[x];
		a[x] = a[y];
		a[y--] = tmp;
	}
}
