#include "stdio.h"
/**
 * factorial - returns the factorial of a number
 *
 * @s: string
 *
 * Return: length of string
 */
int factorial(int n)
{
    if (n == 0)
    {
        return (1);
    }

    return (n * factorial(n - 1));
}
