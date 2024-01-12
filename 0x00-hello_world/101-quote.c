#include <unistd.h>

/**
 * main - print to the standard error
 *
 * Description: using main function
 * this program prints to standard error without using
 * printf and puts
 * Return: 1
 */
int main(void) 
{
    write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
    return 1;
}
