#include <stdio.h>

/**
 * main - Entry point
 *
 * prints all the numbers of base 16 in lowercase
 *
 * Returns: 0 (success)
 */

int main(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);

		if (digit = '9')
		{
			digit = 'a';

			for (; digit <= 'f'; digit++)
			{
				putchar(digit);
			}
			break;

		}

	}
	putchar('\n');

	return (0);
}
