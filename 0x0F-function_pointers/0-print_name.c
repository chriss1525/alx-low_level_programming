#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: string of characters that makes name
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && *(f) != NULL)
	(*f)(name);
}
