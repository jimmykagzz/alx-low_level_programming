#include <stdio.h>
#include <stdlib.h>

/**
 * main -entry point
 *
 * Return: ALways 0 (success)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
		putchar('\n');

	return (0);
}
