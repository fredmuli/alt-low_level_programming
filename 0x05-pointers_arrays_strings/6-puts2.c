#include "main.h"

/**
 * puts2 - a function that prints every other chacter of a string
 * starting with the firs character, followed by a new line
 * @str: input a string
 */

void puts2(char *str)
{
	int len = 0, x = 0;

	while (str[len] != '\0')
		len++;

	len -= 1;

	for (; x <= len; x += 2)
		_putchar(str[x]);

	_putchar('\n');
}
