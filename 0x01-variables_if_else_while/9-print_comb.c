#include<stdio.h>

/**
 * main - entry point
 *
 *
 * return: always 0 (successful)
 */

int main(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
