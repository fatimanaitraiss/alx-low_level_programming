#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_array - prints an array of integers
 *
 * @a: pointer to the integer array
 * @n: number of elements in the array
 *
 * Return: void
 */

void print_array(int *a, int n)
{
        int i;

        for (i = 0; i < n; i++)
        {
                printf("%d", a[i]);
                if (i != n - 1)
                        printf(", ");
        }
        printf("\n");
}
