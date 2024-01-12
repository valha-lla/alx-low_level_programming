#include <stdio.h>
/**
 * main - the main function
 *
 * Description: using the main function
 * print hexidecimal numbers in lowercase
 * Return: 0
 */
int main(void)
{
char c;
for (c = '0'; c <= '9'; c++)
{
	putchar(c);
}
for (c = 'a'; c <= 'f'; c++)
{
	putchar(c);
}
putchar('\n');
return (0);
}
