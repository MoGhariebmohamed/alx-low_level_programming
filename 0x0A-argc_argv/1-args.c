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
	(void)argv;
	printf("%d\n", argc - 1);
		return (0);
}
