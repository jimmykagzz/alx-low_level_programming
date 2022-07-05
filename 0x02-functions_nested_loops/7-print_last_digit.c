#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @d: single number input
 *
 * Return: value of the last digit
 */
int print_last_digit(int d)
{
	int n;

	if (d < 0)
	{
		d =  (d * -1);
	}

	n = (d % 10);
	_putchar (n + '0');
	return (n);
}
