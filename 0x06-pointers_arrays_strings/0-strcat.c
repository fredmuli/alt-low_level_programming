#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: input a string
 * @src: input a string
 * Return: Always 0 (Success)
 */

char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
