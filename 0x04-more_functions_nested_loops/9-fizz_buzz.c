#include <stdio.h>
#include "main.h"
/**
 *main - for printing fizbuz play
 *description:  printing fizz when multi 3 or buzz for 5 multi or fizzbuzz
 *Return: 0 success
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 && (x % 15 != 0))
		{
			printf("Fizz ");
		}
		else if (x % 5 == 0 && (x % 15 != 0))
		{
			printf("Buzz ");
		}
		else if (x % (3 * 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", x);
		}
	}
	printf("\n");
	return (0);
}
