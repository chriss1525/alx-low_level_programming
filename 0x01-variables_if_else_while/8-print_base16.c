#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * prints all the numbers of base 16 in lowercase
 *
 * Return: 0 (success)
 */

int main(void)

{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}

	for (digit = 'a'; digit <= 'f'; digit++)

	{
		putchar(digit);
	}

	putchar('\n');

	return (0);
}
