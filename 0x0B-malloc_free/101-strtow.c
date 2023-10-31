#include "main.h"
#include <stdlib.h>
/**
  * strtow - Splits a string into words
  * @str: The string to split
  *
  * Return: Pointer to an array of strings (words)
  */
char **strtow(char *str)
{
	int count = word_count(str);
	char **words = allocate_memory(str, count);
	int j = 0;
	int i = 0;
	if (str == NULL || *str == '\0')
		return (NULL);
	if (words == NULL)
		return (NULL);
	while (*str)
	{
		if (is_space(*str))
		{
			if (i > 0)
			{
				words[i][j] = '\0';
				i++;
				j = 0;
			}
		}
		else
		{
			words[i][j] = *str;
			j++;
		}
		str++;
	}
	words[i] = NULL;
	return (words);
}
