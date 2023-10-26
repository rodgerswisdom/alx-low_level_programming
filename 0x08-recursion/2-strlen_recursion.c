#include "main.h"
/*
 *_strlen-recursion: function that returns length of string
 *@s - the string
 *Return: length of sting
 * */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + int _strlen_recursion(s+1));
}

