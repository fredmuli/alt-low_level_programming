#include "main.h"

/**
 * print_square : a function that prints asquare, 
 * followed by a new line
 * @size: input integer
 * Return: Always 0 (Success)
 */

void print_square(int size)
{
	int x, y;

	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		
		_putchar('\n');
}
