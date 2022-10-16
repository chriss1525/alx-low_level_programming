#include <stdio.h>

/**
 * main - Entry point- prints the alphabet in lowercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
