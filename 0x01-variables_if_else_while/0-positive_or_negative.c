#include <stdlib.h>
#include <time.h>
/**
 * main - will print the positive, negative or zero
 * value of $n
 * Return: 0 if successful
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes here */
	if (n < 0)
	{
		printf("%d is %s\n", n, "negative")
	} elseif(n == 0) {
		printf("%d is %s\n", n, "zero")
	} else
	{
		printf("%d is %s\n", n, "positive")
	}
	return (0);
}
