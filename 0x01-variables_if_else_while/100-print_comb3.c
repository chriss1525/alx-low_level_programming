#include<stdio.h>

/**
 * main - entry point. Prints all possible two digit combinations
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int digit_one;

	int digit_two;

	for (digit_one = '0'; digit_one <= '9'; digit_one++)
	{
		for (digit_two = '0'; digit_two <= '9'; digit_two++)
		{
			if (digit_one != digit_two && digit_one < digit_two)
			{
				putchar(digit_one);
				putchar(digit_two);
			
				if (digit_one != 8 || (digit_one == '8' && digit_two != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}

	}

	putchar('\n');
	return (0);

}
