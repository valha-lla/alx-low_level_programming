#include <stdio.h>
/**
 * main - print 0-9 without char variable
 *
 * Description: using the main function
 * Return: 0
 */
int main(void)
{
int c;
for (c = 0; c <= 9; c++)
{
	putchar(c);
}
putchar('\n');
return (0);
}
