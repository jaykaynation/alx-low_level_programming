#include "main.h"
/**
 * _islower - will check if the letter is lower case
 * @c: is the lowercase char to print
 * Return: 1 for lowercase and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
