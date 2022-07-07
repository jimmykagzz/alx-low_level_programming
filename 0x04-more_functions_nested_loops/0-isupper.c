#include "main.h"

/**
 * _isupper - determines if character is uppercase letter
 * @c: single character count
 *
 * Return: 1 if uppercase & 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

