#include "main.h"

/**
 * *_memset - wil fill the memory with a constant byte
 * @s: is the memory area to be filled
 * @b: is the char to copy
 * @n: will be the number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
