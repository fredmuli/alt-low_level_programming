#include "main.h"

/**
 * -isdigit : a function that checks for a digit (0 through 9).
 *  @c : input integer
 *  Return: 1 if c is a digit or 0 if otherwise
 */

int _isdigit(int c)
{

	char x = '0';
	int isdigit = 0;

	for (; x <= '9'; x++)
	{
		if (x == c)
		{
			isdigit = 1;
			break;
		}
	}

	return (isdigit);
}
