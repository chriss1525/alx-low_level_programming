#include "main.h"
#include <stdio.h>

/**
 * _sqrt - returns squareroot of a number
 * @n: int
 * @i: int
 * Return: square root of n
 */
int _sqrt(int n, int i)
{
	if (n < 0)
	{
		return (-1);
	}
	else if ((i * i) > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
