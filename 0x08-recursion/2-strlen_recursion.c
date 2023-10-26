#include "main.h"
/**
  * _strlen_recursion: function that returns length of string
  * @s - the string
  * Return: length of sting, or 0 when the string is empty
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
