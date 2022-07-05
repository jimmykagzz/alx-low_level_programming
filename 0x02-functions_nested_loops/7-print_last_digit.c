#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @d: single number input
 *
 * Return: value of the last digit
 */
int print_last_digit(int d)
{
	if (d < 0)
	{
		d =  (d * -1);
	}

	d = (d % 10);
	return (d);
}
