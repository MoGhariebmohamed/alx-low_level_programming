#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *main - for excute the calculations
 *description: function executes the calculations
 *@argc: pointer to number of argv
 *@argv: argument array
 *Return:0 is ok
 */
int main(int argc, char **argv)
{
	int (*function)(int, int), a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	function = get_op_func(argv[2]);
	if (function == NULL || argv[2][0] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' && a == 0) || (argv[2][0] == '%' && b == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", function(a, b));
	return (0);
}
