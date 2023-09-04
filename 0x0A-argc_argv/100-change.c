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
	int i = 1;

	for (i = 1; i < argc; i++)
	{
			if (argc != 2)
			{
				printf("Error\n");
				return (1);

			}
			if (*argv[i] <= '0')
			{
				printf("0\n");
			}
		}/**
		total += atoi(argv[i]);
	}
		printf("%d\n", total);*/
		return (0);
		
}
