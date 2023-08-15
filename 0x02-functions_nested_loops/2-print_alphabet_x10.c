#include "main.h"

/**
 *print_alphabet_x10 - the main function to print lowercase alphapet
 *
 *description: this function to print putchar
 *Return: 0 sucess
 */
void print_alphabet_x10(void)
{
int n = 1;
int i;
while (n <= 10)
{
	i = 'a';
	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
	n++;
}
}
