#include<unistd.h>

/**
  *_putchar: prints a character to stdout
  *
  *@c - the character to be printed
  *
  *Return: On success the number printed, -1 on error and the error number
  */
  
/*int _putchar(char c)
{
	return write(1, &c, 1);
}*/

int _putchar(char c)
{
	return write(1, &c, 1);
}
