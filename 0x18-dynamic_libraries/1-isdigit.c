#include "main.h"
/**
 * _isdigit - checks if a number is a digit
 * @c: int
 * Return: 1 (success)
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
