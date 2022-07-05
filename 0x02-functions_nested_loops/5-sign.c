#include "main.h"

/**
 * print_sign - checks if value is <0 or >0
 * @n: single number input
 *
 * Return: 1 if >0 & 0 if <0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
		_putchar ('-1');
	return (-1);
}
