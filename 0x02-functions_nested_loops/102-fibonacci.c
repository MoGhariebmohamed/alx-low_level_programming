#include "main.h"
#include <stdio.h>
/**
 *main  - the main function to print lowercase alphapet
 *description: this function to print sum of natural no
 *Return: 0 success
 */
int main(void)
{
unsigned long  n = 1;
unsigned long t = 0;
unsigned long x;
	int c = 0;

	while (c < 50)
	{
		x = n + t;
printf("%lu", x);
t = n;
n = x;
if (c != 49)
{
	printf(", ");
}
else if (c == 49)
{
	printf("\n");
}
c++;
}
	return (0);
}
