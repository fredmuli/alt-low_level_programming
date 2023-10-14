#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int x = 3, n = 612852475143;

	for (; x < 1231952; x += 2)
	{
		while (n % x == 0 && n != x)
			n/= x;
	}
	printf("%lu\n", n);
	return (0);
}
