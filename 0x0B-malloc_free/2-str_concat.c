#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first
 * @s2: second
 *
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int length1 = 0, length2 = 0, i;

	if (s1)
	{
		while (s1[length1])
			length1++;
	}
	if (s2)
	{
		while (s2[length2])
			length2++;
	}

	concat = malloc(sizeof(char) * (length1 + length2 + 1));
	if (!concat)
		return (NULL);
	for (i = 0; i < length1; i++)
		concat[i] = s1[i];
	for (i = 0; i < length2; i++)
		concat[length1 + 1] = s2[i];
	concat[length1 + length2] = '\0';

	return (concat);
}
