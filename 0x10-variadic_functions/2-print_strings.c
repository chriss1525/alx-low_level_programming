#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings followed by a new line
 * @separator: the string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: Void, nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *s;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);

		if (s == NULL)
			s = "(nil)";

		printf("%s", s);

		if (i < n - 1 && separator)
			printf("%s", separator);
	}

	printf("\n");
	va_end(ap);
}
