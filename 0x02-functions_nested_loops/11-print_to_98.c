#include <stdio.h>
#include "main.h"

/**
 *print_to_98 - the main function to printnatural no
 *@n: for natural number
 *description: this function to print putchar
 *Return: 0 sucess
 */
void print_to_98(int n)
{
	n = n;
while (n <= 98)
{
	if (n != 98)
	{
		printf("%d, ", n);
	}
	else if (n == 98)
	{
		printf("%d\n", n);
	}
	n++;
}
}
