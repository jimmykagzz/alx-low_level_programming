#include "main.h"

/**
 * _isalpha - determines if character is in the alphabet
 * @c: single character input
 *
 * Return: 1 if in alphabet & 0 for anything else
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
