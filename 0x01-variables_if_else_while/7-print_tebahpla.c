#include <stdio.h>
/**
 * main - print using main function
 *
 * Description: using the main function
 * print alphabets a-z in reverse order
 * Return: 0
 */
int main(void)
{
char c;
for (c = 'z'; c >= 'a'; c--)
{
putchar(c);
}
putchar('\n');
return (0);
}
