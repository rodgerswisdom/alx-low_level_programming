#include "main.h"
/**
  * _pow_recursion - main function that returns power of x
  * @x : the number whose power is returned
  * @y : the power
  * Return: power of x, or -1 if y is less than 0
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
