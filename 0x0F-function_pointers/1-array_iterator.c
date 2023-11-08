#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 * @array: The array of integers
 * @size: The size of the array
 * @action: A function pointer that specifies the action to execute
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
	{
		size_t i;
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
