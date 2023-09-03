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

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
		return (0);
}
