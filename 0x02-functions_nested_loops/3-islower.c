#include "main.h"

/**
 * _islower - determines lowercase alphabet
 * @c: single character input
 *
 * Return: 1 if lowercase & 0 for anything else
 */
int _islower(int c)
{
	int c;

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
