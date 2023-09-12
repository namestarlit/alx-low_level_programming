#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: Index of value (if exists), -1 (if value doesn't exist)
 */
int linear_search(int *array, size_t size, int value)
{
	int index = 0;
	int arr_size = (int)size;

	/* Check if array is empty */
	if (array == NULL)
		return (-1);

	for (index = 0; index < arr_size; index++)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}

	return (-1);
}
