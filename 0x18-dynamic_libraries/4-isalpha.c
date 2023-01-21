#include "main.h"
/**
 *_isalpha - Entry point. Checks if character is alphabet
 *
 * @c: int
 *
 *Return: 1 (success)
*/

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
