#include "main.h"
/**
 * _prime_finder - A functions that finds prime number
 * @n: The number to evaluate if prime
 * @div: the divisor
 * Return: 1 if prime, 0 on error
 */
int _prime_finder(int n, int div)
{
	if (n <= 1)
	{
		return (0);
	}
	if (div == 1)
	{
		return (1);
	}
	if (n % div == 0)
	{
		return (0);
	}
	return (_prime_finder(n, div - 1));
}
/**
 * is_prime_number - A function that returns 1, if prime and 0 if not prime
 * @n: number to evaluate
 * Return: 1 if prime, 0 if not prime
 */
int is_prime_number(int n)
{
	return (_prime_finder(n, n - 1));
}
