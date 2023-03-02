#include "main.h"

/**
 * get_bit - gets a bit at a given index
 * @n: number to get the bit for
 * @index: index of the bit to
 *
 * Return: 1 (success), -1 (failure)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
