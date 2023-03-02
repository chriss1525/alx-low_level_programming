#include "main.h"
/**
 *binary_to_uint - converts a binary number to an unsigned int
 *@b: string of binary code
 *Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i])
	{
		if (b[i] == '0' || b[i] == '1')
		{
			x = ((2 * x) + (b[i] - '0'));
		}
		else
			return (0);
		i++;
	}
	return (x);
}
