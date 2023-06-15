#include "main.h"

/**
 * _strncat - two words
 * @dest : pointer to char param
 * @src : pointer to char param
 * @n : int parameter
 * Return: *dest
 */

char *_strncat(char *dest, char *src, int n)
{
<<<<<<< HEAD
	return (0);
=======
	int j;
	int i;

	j = 0;

	for (i = 0; i < 1000; i++)
	{
		if (dest[i] == '\0')
		{
			break;
		}
		j++;
	}

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest [j+ i] = src[i];
	}
	dest[j + i] = '\0';
	return (dest);
>>>>>>> up date
}
