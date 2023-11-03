#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - Checks if a string contains only digits.
 * @str: The input string to check.
 *
 * Return: 1 if all characters are digits, 0 otherwise.
 */
int is_digit(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return 0;
		str++;
	}
	return 1;
}

/**
 * main - Multiplies two positive numbers.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
	char *num1 = argv[1];
	char *num2 = argv[2];
	int result = atoi(num1) * atoi(num2);

	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n");
		return 98;
	}

	char *num1 = argv[1];
	char *num2 = argv[2];
	int result = atoi(num1) * atoi(num2);


	printf("%d\n", result);
	return 0;
}
