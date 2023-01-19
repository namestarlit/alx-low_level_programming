#include "function_pointers.h"

/**
 * int_index - finds an integer in an array
 * @array: array of integers
 * @size: size of the array
 * @cmp: function pointer
 *
 * Return: return (index) (if cmp !return (0)),
 * return (-1) (for size <= 0 || otherwise)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	size_t index;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		/* iterate through an array of int */
		for (index = 0; index < size; index++)
		{
			if (cmp(array[index]))
				return (index);
		}
	}
	else
		return (-1);
}
