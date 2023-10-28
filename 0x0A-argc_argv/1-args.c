#include<stdio.h>
#include "main.h"
/**
 * main - main function
 * @argc: number of arguments
 * @argv: array of pointer
 * Return: always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
