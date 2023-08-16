#include "main.h"
#include <stdio.h>
/**
 *main  - the main function to print lowercase alphapet
 *description: this function to print sum of natural no
 *Return: 0 success
 */
int main(void)
{
	int n = 0;
	int x;

	while (n < 1024)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			x = n + n;
		}
			n++;
	}
	printf("%d\n", x);
	return (0);
}
