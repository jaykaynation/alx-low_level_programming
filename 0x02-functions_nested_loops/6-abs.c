#include "main.h"
/**
 * _abs - will print the absolute value of an integer
 * @x: is the integer to get absolute value of
 * Return: 0 on success
 */
int _abs(int x)
{
	if (x > 0)
	{
		return (x);
	}
	else if (x == 0)
	{
		return (x);
	}
	else
	{
		return (x * -1);
	}
}
