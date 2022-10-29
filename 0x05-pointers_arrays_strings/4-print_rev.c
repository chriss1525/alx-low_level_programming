#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 */
void print_rev(char *s)
{
    int i, c, x;

    i = '0'; 
    while (s[i] != '\0')
    {
        i++;
    }  

    x = i;

    for (c = x-i; c >= '0'; c--)
    {
        _putchar(s[c]);
    }

    _putchar('\n');
}
