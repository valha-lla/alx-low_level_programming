#include "main.h"
/**
 * print_last_digit - function that
 * prints last digit of an integer
 * @c:  is the int that will use for
 * the argument of the function
 * Return: 0
 */
int print_last_digit(int c)
{
	if (c > 0 || c == 0)
	{
	return (c % 10);
	}
	else
	{
	c = c * -1;
	return (c % 10);
	}
}
