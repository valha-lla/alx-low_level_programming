#include <stdio.h>

/**
 * main- function to print 2 digits combination
 *
 * Description: combine two digits in the every
 * possible way, numbers < 99
 */

int main(void) 
{
int i;
int j;

for (i = 0; i <= 99; i++) 
{
	for (j = i; j <= 99; j++)
	{
		putchar('0' + i / 10);
		putchar('0' + i % 10);
		putchar(' ');
		putchar('0' + j / 10);
		putchar('0' + j % 10);
		
		if (i != 99 || j != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
}
putchar('\n');

return 0;
}

