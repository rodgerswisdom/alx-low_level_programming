#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - Concatenates all the arguments of a program
 * @ac: The argument count
 * @av: The argument vector (an array of strings)
 *
 *  Return: A pointer to a new string containing the concatenated arguments.
 *  NULL if ac == 0 or av == NULL or if memory allocation fails.
 */
char *argstostr(int ac, char **av)
{

	int total_length = 0;
	int i, j;
	char *concatenated;
	int index = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			total_length++;
		total_length++;
	}

	concatenated = (char *)malloc(total_length * sizeof(char) + 1);
	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			concatenated[index++] = av[i][j];
		concatenated[index++] = '\n';
	}
	return (concatenated);
}
