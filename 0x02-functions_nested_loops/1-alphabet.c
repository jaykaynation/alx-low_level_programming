include "main.h"
/**
 *main - will print the alphabet in lowercase
 *
 *Return: 0 on success
 */
void print_alphabet(void)
{
	int x = 'a';
	
	while(x <= 'z')
	{
		putchar(x);
		x++;
	}

	return (0);
}
