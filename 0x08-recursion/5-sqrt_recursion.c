#include "main.h"
/**
 * _sqrt_finder - Finds the square root
 * @n : the number for which the natural square root is to be calculated
 * @guess : the guess square
 * Return : natural square root, or -1 if not found
 */
int _sqrt_finder(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	if (guess * guess > n)
	{
		return (-1);
	}
	return (_sqrt_finder(n, guess + 1);
}
/**
 * _sqrt_recursion - function that recurses to find ssquaroot of a number
 * @n : the number for which the natural square root is found
 * Return : the natural square root, -1 if on error
 **/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_finder(n, 0));
	}
}
