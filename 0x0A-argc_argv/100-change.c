#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int cents, num_coins;
	int coins[] = {25, 10, 5, 2, 1};
	int i;

	if (argc !=2)
	{
		printf("Erroe\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	num_coins = 0;
	for (i = 0; i < 5; i++)
	{
		num_coins += cents / coins[i];
		cents %= coins[i];
	}
	printf("%d\n", num_coins);
	return (0);
}
