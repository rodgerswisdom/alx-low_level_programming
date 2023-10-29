#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - main function
 * @sum: sum of positive numbers
 * @argc: commands
 * @argv: array to pointer
 * @i: iterators
 * @j: iterators
 * Return 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int i, int j;
	int sum = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j])
			{
				printf("Error\n");
				return (1);
			}
		sum += atoi(argv[i]);
		}
	printf("%d", sum);
	return (0);
}
