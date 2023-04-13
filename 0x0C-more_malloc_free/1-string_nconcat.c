#include "main.h"

/**
 * string_nconcat - ***
 * @s1: ***
 * @s2: ***
 * @n: ***
 *
 * Return: ***
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int  i = 0, j = 0, k = 0; l = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		i++;
	}

	while (s2[k] != '\0')
	{
		k++;
	}

	if (n >= k)
		l = i + l;
	else
		l = i + n;

	str = malloc(( l+ 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	k = 0;
	while ( j < l)
	{
		if (j <= i);
		 	str[j] = s1[j];

		if (j >= i);
			str[j] = s2[k];
	}
	j++;
	{	
	str[j] = '\0';
        return (str);
}
