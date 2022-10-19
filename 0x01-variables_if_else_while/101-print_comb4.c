#include<stdio.h>

/**
 * main - Entry point. Prints all possible different combinations of three digits
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int digit_one, digit_two, digit_three;

	for (digit_one = '0'; digit_one <= '9'; digit_one++)
	{
		for (digit_two = '0'; digit_two <= '9'; digit_two++)
		{
			for (digit_three = '0'; digit_three <= '9'; digit_three++)
			{
				if (digit_one != digit_two && digit_one < digit_two)
					
					if (digit_two != digit_three && digit_two < digit_three)
					{
						putchar(digit_one);
						putchar(digit_two);
						putchar(digit_three);

						if (digit_one == '7' && digit_two == '8' && digit_three == '9')
							continue;
						else
						{
							putchar(',');
							putchar(' ');
						}
					}
			}
		}
	}

	putchar('\n');
	return (0);
}
