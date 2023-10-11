#include "function_pointers.h"

/**
 * print_name - prints a given name
 * @name: given name to print
 * @f: pointer to the printing function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
