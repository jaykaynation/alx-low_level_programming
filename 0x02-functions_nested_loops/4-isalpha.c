#include "main.h"
/**
 * _isalpha - will check if a variable is alphabet
 * @c: is the variable to be tested
 * Return: 1 if c is alphabet and 0 for anything else
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
