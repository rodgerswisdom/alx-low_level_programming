#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _num_checker - functions that checks if there's a digit in a string
 * @str: array string
 * Return: always 0
 */
int _num_checker(char *str)
{
	unsigned int count;
	count = 0;
	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}
/**
 * main - main function
 * @argc: number of arguments
 * @argv: Array of pointers
 * Return: Always 0
 */
int main(argc, *argv[])
{
	int count;
	int str_to_int;
	int sum;
	count = 1;
	sum = 0;
	while (count < argc)
	{
		if (_num_checker(argv[count])
		{
			str_to_int = atoi(argv[count]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
	}
