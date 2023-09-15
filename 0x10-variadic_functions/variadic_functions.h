#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdio.h>
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 *struct typ - Struct operators
 *description: this structure to get all function
 * @id: Char
 * @all: The function associated
*/
typedef struct fun
{
	char *id;
	void (*get)(va_list all);
}fun_t;
#endif
