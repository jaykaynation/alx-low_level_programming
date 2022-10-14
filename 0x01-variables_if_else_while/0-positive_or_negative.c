#include <stdlib.h>
#include <time.h>
/**
 * main - will print the positive, negative or zero
 * value of $n
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
		printf("%d", $n is negative)
	} elseif(n == 0) {
		printf("%d", $n is zero)
	} else
	{
		printf("%d", $n is positive)
	}
	return (0);
}
