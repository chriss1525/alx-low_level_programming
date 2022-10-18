#include<stdio.h>
/**
 * main - Entry point- printing single digit numbers of base 10
 *
 * Return: Always 0 (success)
 */
int main(void)

{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)

	{
		putchar(digit);
	}

	putchar('\n');
	return (0);
}
