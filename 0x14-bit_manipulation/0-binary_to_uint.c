#include "main.h"
/**
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;
	int i = 0;

	while (b[i] != '\0')
	{
		x = (2 * x + b[i]);
		i++;
	}
	if ((b[i] != 0) & (b[i] != 1))
		return (0);
	if (b == NULL)
		return (0);
	return (x);
}
