#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @array: The array of integers
 * @size: The number of elements in the array
 * @cmp: A pointer to the comparison function
 *
 * Return: The index of the first element for which cmp function doesn't return 0
 * If no element matches or size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && cmp && size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return i;
		}
	}
	return -1; 
}
