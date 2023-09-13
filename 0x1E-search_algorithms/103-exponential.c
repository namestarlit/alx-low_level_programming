#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - Searches a value in a sorted array of integers.
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: Index of value (if exists), -1 (if value doesn't exist)
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int mid = 0;
	int i = 0;

	/* Check if array is empty or size is zero */
	if (array == NULL || size == 0)
		return (-1);

	while (left <= right)
	{
		/* Get the middle index of the array */
		mid = left + (right - left) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		putchar('\n');

		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
	}

	/* If value doesn't exist */
	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array of integers.
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: Index of value, -1 (if value doesn't exist)
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t index, next;
	int result;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);

	index = 1;

	while (array[index] < value && index < size)
	{
		printf("Value checked array[%d] = [%d]\n", (int)index, array[index]);
		index *= 2;
	}

	next = (index >= size) ? (size - 1) : index;

	index /= 2;

	printf("Value found between indexes [%d] and [%d]\n", (int)index, (int)next);

	result = binary_search(array + index, (next + 1) - index, value);

	if (result >= 0)
		result += index;

	return (result);
}
