#include "main.h"

/**
 * _strncat - a function that concatenates two stringgs
 * @dest: input a string
 * @src: input a string
 * @n: inpit an integer
 * Return: Alwaya 0 (Success)
 */

char *_strncat(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	while (*dest)
		dest++;

	if (n > srclen)
		n = srclen;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
