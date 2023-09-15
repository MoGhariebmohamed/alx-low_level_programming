#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - program that prints the opcodes of its own main function
 *description: program that prints the opcodes of its own main function
 *@argc: pointer to an array
 *@argv: size of array
 *Return: int
*/
int main(int argc, char **argv)
{
	int (*x)(int, char **) = main;
	int y, i;
	unsigned char value;

	if (argc != 2)
	{
		printf("Error\n");
	exit(1);
	}
	y = atoi(argv[1]);
	if (y < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < y; i++)
	{
		value = *(unsigned char *)x;
		printf("%.2x", value);
		if (i == y - 1)
			continue;
		printf(" ");
		x++;
	}
	printf("\n");
	return (0);
}
