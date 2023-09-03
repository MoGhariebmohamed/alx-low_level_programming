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
	char x = *argv[i];
	int total;

	for (i = 1; i <= argc; i++)
	{
		for (j = 0; j <= argv[i][j]; j++)
		{
			if (x >= '0' && x <= '9')
			{

				total += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
		printf("%d\n", total);
	
		return (0);
}
