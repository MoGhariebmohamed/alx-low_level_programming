#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *main - for printing file name
 *description: this function for printing the file neme each time change
 *@argv: the string for argv
 *@argc: the counter for string
 *Return: 0 if not
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int j;
	int total = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);

			}
		}
		total += atoi(argv[i]);
	}
		printf("%d\n", total);
		return (0);
}
