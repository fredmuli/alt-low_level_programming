#include "main.h"

/**
 * print_number : a function that prints and integer.
 * @n: intput integer
 * Return: Always 0 (Success)
 */

void print_number(int n)
{
	if (n == 0)
		_putchar('0');
	else if (n < 0)
	{
		_putchar('-');
		print_integer(n * -1);
	}

	else
		print_integer(n);

	return (0);
}
