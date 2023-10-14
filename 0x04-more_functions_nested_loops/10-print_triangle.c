#include "main.h"

/**
 * main - Entry point
 * print_triangle : a function that prints a triangle,
 * followed by a new line.
 * @size: input integer
 * Return: Always 0 (Success)
 */

void print_triangle(int size)
{
	int x = 0, y, n = size - 1;

	if (size > 0)
	{
		for (; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				if (y < n)
					_putchar(' ');
				else
					_putchar('#');
			}
			n--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
