#include "main.h"

/**
 * _strlen - a function thqat returns the length of a string.
 * @s: input a string
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int len = 0;

	for (; s[len] != '\0'; len++)
	;
	return (len);
}
