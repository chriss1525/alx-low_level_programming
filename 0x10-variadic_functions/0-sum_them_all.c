#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Sums all its parameters
 * @n: unsigned integer. Constant argument
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum;
	unsigned int i;

	va_list(param);
	if (n == 0)
		return (0);

	va_start(param, n);

	sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(param, int);

	va_end(param);
	return (sum);
}
