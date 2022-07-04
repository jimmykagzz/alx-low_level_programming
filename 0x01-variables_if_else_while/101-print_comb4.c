#include <stdio.h>
#include <stdlib.h>

/**
 * main -entry point
 *
 * Return: ALways 0 (success)
 */

int main(void)
{
	int digit1, digit2, digit3;

	for (digit1 = '0'; digit1 <= '9'; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 <= '9'; digit2++)
		{
			for (digit3 = digit2 + 1; digit3 <= '9'; digit++)
			{
				putchar(digit1);
				putchar(digit2);
				if (digit1 < '7' && digit2 < '8' && digit3 <= '9')
				{
					putchar(',');
					putchar(' ');
				}
			}

		}
	}
	putchar('\n');
	return (0);
}
