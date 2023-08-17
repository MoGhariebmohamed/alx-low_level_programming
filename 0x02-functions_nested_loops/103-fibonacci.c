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
unsigned long z;
	int c = 0;

	while (c < 50)
	{
		x = n + t;
		if (x > 4000000)
		break;
		if (x % 2 == 0)
		{
		z += x;
			t = n;
			n = x;
			printf("%lu", z);
			c++;
		}
	}
	printf("\n");
		return (0);
}
