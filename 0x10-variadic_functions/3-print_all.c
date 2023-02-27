#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: a list of types of arguements passed to the function
 *
 * Return: Void, nothing
 */
void print_all(const char *const format, ...)
{
	identifier ids[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}};
	va_list ap;
	int i, j;
	char *separator = "";

	va_start(ap, format);

	i = 0;

	while (format && format[i])
	{
		j = 0;

		while (ids[j].format)
		{
			if (*ids[j].format == format[i])
			{
				printf("%s", separator);
				ids[j].print(ap);
				separator = ", ";
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(ap);
}

/**
 * print_c - prints a character
 * @list: va_list
 *
 */
void print_c(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_i - prints an integer
 * @list: va_list
 *
 */
void print_i(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_f - prints an integer
 * @list: va_list
 *
 */
void print_f(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_s - prints a string
 * @list: va_list
 *
 */
void print_s(va_list list)
{
	char *str;

	str = va_arg(list, char *);

	if (str == NULL)
		str = "(nil)";

	printf("%s", str);
}
