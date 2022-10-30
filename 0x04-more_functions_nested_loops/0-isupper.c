#include "main.h"
/**
 *_isupper - Entry poit. Checks if character is lower
 *
 * @c: int
 *
 *Return: 1 (success)
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
