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
int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}
int word_count(char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str)
	{
		if (is_space(*str) && in_word)
			in_word = 0;
		else if (!is_space(*str) && !in_word)
		{
			in_word = 1;
			count++;
		}
		str++;
	}
	return (count);
}
char **allocate_memory(char *str, int count)
{
	int j = 0;
	int i = 0;
	int k;
	char **words = malloc((count + 1) * sizeof(char *));

	if (words == NULL)
		return (NULL);
	for (i = 0; i < count; i++)
	{
		while (is_space(*str))
			str++;
		while (!is_space(*str))
		{
			str++;
			j++;
		}
		words[i] = malloc((j + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(words[k]);
			free(words);
			return (NULL);
		}
	}
	return (words);
}
