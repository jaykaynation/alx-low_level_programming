#include "main.h"

/**
 * rev_string - will reverse a string
 * @s: pointer to string to reverse
 * Return: void
 */

void rev_string(char *s)
{
	int len, i;
	char *begin, *end, temp;

	begin = s;
	end = s;

	len = _strlen(s);

	for (i = 0; i < len - 1; i++)
		end++;
	for (i = 0; i < len / 2; i++)
	{
		temp = *begin;
		*begin = *end;
		*end = temp;
		end--;
		begin++;
	}
}
/**
 * _strlen - print string length
 * @s: pointer to string
 * Return: count
 */

int _strlen(char *s)
{
	int count;

	for (count  = 0; s[count] != '\0'; count++)
		;
	return (count);
}
