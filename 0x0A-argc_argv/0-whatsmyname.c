#include<stdio.h>
#include "main.h"
/**
 *main - main Function
 *@argc: counts the number of commands
 * @argv: array to pointer of arguments
 * Return: always zero
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
