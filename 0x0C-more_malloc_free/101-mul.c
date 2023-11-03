#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - Checks if a string contains only digits.
 * @str: The input string to check.
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
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
       	{
		printf("Error\n");
		return 98;
	}

	char *num1 = argv[1];
	char *num2 = argv[2];
	int len1 = 0;
	int len2 = 0;

	while (num1[len1] != '\0')
		len1++;
	while (num2[len2] != '\0')
		len2++;


	int len_result = len1 + len2;
	int *result = malloc(sizeof(int) * len_result);

	for (int i = 0; i < len_result; i++)
       	{
		result[i] = 0;
	}

	for (int i = len1 - 1; i >= 0; i--)
       	{
		int carry = 0;
		int n1 = num1[i] - '0';

	}
	for (int j = len2 - 1; j >= 0; j--)
       	{
		
		int n2 = num2[j] - '0';
		int sum = n1 * n2 + result[i + j + 1] + carry;
		carry = sum / 10;
		result[i + j + 1] = sum % 10;
	}

	result[i] += carry;
}

int start = 0;

while (start < len_result - 1 && result[start] == 0)
{
	start++;
}
for (int i = start; i < len_result; i++)
{
	printf("%d", result[i]);
}
printf("\n");

free(result);
return 0;
}
