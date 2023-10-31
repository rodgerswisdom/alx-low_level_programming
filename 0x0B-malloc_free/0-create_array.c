#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - main function
 * @size: size of array
 * @c: character initialized
 *
 * Return: a pointer to array, NULL if fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);
	
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
