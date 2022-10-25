#include "main.h"

/**
 * swap_int - will swap arguments of variables
 * @a: pointer to variable
 * @b: pointer to variable
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int swint = *a;
	*a = *b;
	*b = swint;
}
