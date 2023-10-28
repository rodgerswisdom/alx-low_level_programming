#include<stdio.h>
#include "main.h"
/**
 *main - main Function
 *@argc: counts the number of commands
 * @argv: array to pointer of arguments
 * Return: always zero
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
