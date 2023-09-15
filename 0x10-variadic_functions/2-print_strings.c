#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_string - prints string
 *description:  function that prints string, followed by a new line
 *@separator: the string to be printed between numbers
 *@n: number of integers passed to the function
 *Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list all;
	unsigned int x;

	if (n == 0)
		return;
	va_start(all, n);
	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(all, int));
		if (x < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(all);
}
