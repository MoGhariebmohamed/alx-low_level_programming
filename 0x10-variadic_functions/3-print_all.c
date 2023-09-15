#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_all - prints everything
 *description:  function that prints all types of input, followed by a new line
 *@format: the string to be printed between numbers
 *@n: number of integers passed to the function
 *Return: void
 */
void print_all(const char * const format, ...)
{
	va_list all;
	unsigned int x;
	char *y;

	if (n == 0)
		return;
	va_start(all, n);
	for (x = 0; x < n; x++)
	{
		y = va_arg(all, char *);
		if (y == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", y);
		}
		if (x != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(all);
}
