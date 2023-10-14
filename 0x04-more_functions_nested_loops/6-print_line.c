#include "main.h"

/**
 * print_line : a function that draws a stright line in the terminal
 * @n: input integer
 * followed by a new line.
 * Return: Always 0
 */
void print_line(int n)
{
	int x = 0;

	if (n > 0)
	{
		for (; x < n; x++)
			_putchar('_');
	}

	_putchar('\n');

}
