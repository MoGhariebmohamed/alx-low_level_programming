#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all - forsum all integer in argument
 *description: this function for print all number
 *@n: pointer to
 *Return: void
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list all;
	int add = 0;
	unsigned int x;

	if (n == 0)
		return (0);
	va_start(all, n);
	for (x = 0; x < n; x++)
	{
		add += va_arg(all, int);
	}
	va_end(all);
	return (add);
}
