#include "main.h"

/**
 * more_numbers - print numbers from  0-14, 10 times
 *
 *
 * Return: ALways 0
 */

void more_numbers(void)
{
	int count, c;

	for (count = 0; count < 10; count++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
			{
				_putchar(c / 10 + '0');
			}
			_putchar(c % 10 + '0')
		}
		_putchar('\n');
	}
}

