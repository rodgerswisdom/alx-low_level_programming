#include <stdio.h>
/* #include <stdlib>*/
#include "main.h"
/**
 * main - main function
 * atoi - converts arguments to integer
 * @num1: the first number
 * @num2: the second number
 * @result: the result of num1 * num2
 * Return: 1 on Error, 0 on success
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
