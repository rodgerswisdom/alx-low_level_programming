#include "main.h"
/**
 * _memset -will  fill a block of memory with a specified value
 * s: starting address of memory to be filled
 * b: the desired value
 * n: number of bytes to be changed
 *
 * Return:  array with new value for the bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;


	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
