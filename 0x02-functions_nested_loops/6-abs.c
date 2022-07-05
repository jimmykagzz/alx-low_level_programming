#include "main.h"

/**
 * _abs - checks the absolute value of a number
 * @abs: single number input
 *
 * Return: absolute value of abs
 */
int _abs(int abs)
{
	if (abs >= 0)
	{
		return (abs);
	}
	return (abs * -1);
}
