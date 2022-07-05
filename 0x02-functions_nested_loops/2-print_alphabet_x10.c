#include "main.h"

/**
 * print_alphabet_x10 - function that prints lowercase alphabet 10 times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int letter;
	int numb;

	for numb (numb = 0; numb < 10; numb++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
