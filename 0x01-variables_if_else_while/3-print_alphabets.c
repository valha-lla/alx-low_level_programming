#include <stdio.h>
/**
* main - print alphabets
*
* Description: using the main function
* Return: 0
*/
int main(void)
{
char lower = 'a';
char upper = 'A';

while (lower <= 'z')
{
	putchar(lower);
	lower++;
}

while (upper <= 'Z')
{
	putchar(upper);
	upper++;
}

putchar('\n');

return (0);
}
