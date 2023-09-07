#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *main - for printing print the amount of chang remaining
 *description: function for the amount of changes based on 1,2,5,10&25
 *@argv: the string for argv
 *@argc: the counter for string
 *Return: 0 if not
 */
int main(int argc, char *argv[])
{
	int r;
	int c = 0;
	
	if (argc != 2)
	{
		printf("Error\n");
		return (1);

	}
	c = atoi(argv[1]);
	while (c < 0)
	{
		r++;
		if ((c - 25) >= 0)
		{
			c = c - 25;
			continue;
		}
		if ((c - 10) >= 0)
		{
			c = c - 10;
			continue;
		}
		if ((c - 5) >= 0)
		{
			c = c - 5;
			continue;
		}
		if ((c - 2) >= 0)
		{
			c -= 2;
			continue;
		}
		c++;
	}
	printf("%d\n", r);
	return (0);
}
