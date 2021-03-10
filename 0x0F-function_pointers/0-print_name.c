#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - print a name
 * @name: the string to print
 * @f: pointer to function
 *
 * Return: function to pointer to print name
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
