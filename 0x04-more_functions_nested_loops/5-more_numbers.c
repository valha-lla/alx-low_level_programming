#include "main.h"

/**
 * more_numbers - number factorial
 *
 * Return: no return
 */

void more_numbers(void)
{

int i;
int j;
	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
			_putchar('1');
			_putchar(j % 10 + '0');
		}
			_putchar('\n');
		}
}
