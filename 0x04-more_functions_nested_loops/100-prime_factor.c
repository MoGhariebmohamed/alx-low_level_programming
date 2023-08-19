#include <stdio.h>
#include "main.h"
/**
 *main - for printing The prime factors
 *description:  printing primary
 *Return: 0 success
 */
int main(void)
{
	long int z = 612852475143;
	long int x;

	for (x = 2; x <= z; x++)
	{
		if (z % x == 0 )
		{
			z = z / x;
			x--;
		}
	}
		printf("%ld", x);


	printf("\n");
	return (0);
}
