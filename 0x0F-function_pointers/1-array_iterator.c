#include "function_pointers.h"

/**
  * array_iterator - a function given
  * @array: array to execute func on
  * @size: size of array
  * @action: pointer to function
  *
  * Return: void
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
