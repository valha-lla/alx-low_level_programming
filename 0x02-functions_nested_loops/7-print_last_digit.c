#include "main.h"
#include <limits.h>
/**
 * print_last_digit - function that
 * prints last digit of a number
 * @c:  is the int that will use for the
 * argument of the function
 * Return: 0
 */
int print_last_digit(int c)
{
	if (c > 0 || c == 0)
	{
	_putchar (c % 10 + '0');
	return (c % 10);
	}
	if (c == INT_MIN)
	{
	_putchar(8 + '0');
	return (8);
	}
	else
	{
	c = c * -1;
	_putchar (c % 10 + '0');
	return (c % 10);
	}
}
