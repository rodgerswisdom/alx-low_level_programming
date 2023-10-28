#include<stdio.h>
#include "main.h"
/**
 * main - main function
 * @argc: number of arguments
 * @argv: array of pointers
 * Return: always 0
 */
int main(argc, *argv[])
{
	for (int i = 0; i < argc; i ++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
