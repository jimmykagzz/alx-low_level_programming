#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: An input integer
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int row;
	int col;

	if (n > 0)
	{
		for (row = 0; row < n; row++)
		{
			for (col = 0; col < row; col++)
			{
				_putchar(' ');
			}
		_putchar(92);
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
