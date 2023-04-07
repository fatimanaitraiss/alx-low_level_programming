#include "main.h"

/**
 * _isalpha - check the code for Holberton School students.
 *
 * @c: is c an integer argument
 *
 * Return: Always 0.
 */

int _isalpha(int c)
{

	if (c >= 70 && c <= 102)
	{
		return (1);
	}
	else if (c >= 85 && c <= 112)
	{
		return (1);
	}
	return (0);
}

