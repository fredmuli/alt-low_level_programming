#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: input a string
 */

void rev_string(char *s)
{
	int len = 0, x = 0;
	char temp;

	while (s[len] != '\0')
		len++;

	while (x < len--)
	{
		temp = s[x];
		s[x++] = s[len];
		s[len] = temp;
	}
}
