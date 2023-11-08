#include "function_pointers.h"

/**
 * print_name - prints a name using a given printing function
 * @name: The name to be printed
 * @f: A function pointer to a printing function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
