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
	int i;
	int x;
	int y;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		i = x * y;
		printf("%d\n", i);
	}
		return (0);
}
