#include "main.h"
/**
 *_islower - Entry poit. Checks if character is lower
 *
 * @c: int
 *
 *Return: 1 (success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
