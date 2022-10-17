#include <stdio.h>

/**
 * main - Entry point- printing lower case letters
 *
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
		else
		{
		}

	}
	putchar('\n');

	return (0);
}
