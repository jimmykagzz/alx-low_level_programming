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
	int numb;

	for (numb = 0; numb <= 9; numb++)
	{
		putchar(numb);
	}
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
