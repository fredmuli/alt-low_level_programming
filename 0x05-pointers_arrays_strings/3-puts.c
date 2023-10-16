#include "main.h"

/**
 * _puts - a function tha prints a string
 * followed by a new line, to stdout
 * @str: input a string
 */

void _puts(char *str)
{
	int x = 0;

	for (; str[x] != '\0';)
	{
		_putchar(str[x]);
		x++;
	}

	_putchar('\n');
}
