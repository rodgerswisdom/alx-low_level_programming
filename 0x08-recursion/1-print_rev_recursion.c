#include "main.h"
/*
 *_print-rev-recursion - prints string reverse
 *_putchar - prints the string
 *
 *@s - the character to be printed
 * */
void _print_rev_recursion(char *s)
{
	if (*s != '/0')
	{
		_print_rev_recursion(s+1);
		_putchar(*s);
	}
}
