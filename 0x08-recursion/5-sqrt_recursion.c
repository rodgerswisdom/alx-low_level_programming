#include "main.h"
/**
 *_sqrt_finder - A function that find square root
 *@n : the number for which the square root is found
 * @guess : the squaroot guess
 * 
 * Return : the squaroot, -1 if none
 * */
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
	return (_sqrt_finder (n, guess + 1));
}
/**
 * _sqrt_recursion - A function that returns the square root of n
 * @n : the number for which its square root is returned
 * Return : natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_finder(n, 0));
}
