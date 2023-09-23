#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdio.h>
/**
 *_putchar - to put one char
 *@c: charachter
 *Return: the characher of string
 */
int _putchar(char c);
/**
 *sum_them_all - to summ all variables
 *@n: integer variable initial
 *Return: integer if done
 */
int sum_them_all(const unsigned int n, ...);
/**
 *print_numbers - to print all numbers
 *@separator: the first seperator for string
 *@n: nober of strings
 *Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...);
/**
 *print_string - to print string
 *@separator: the first seperator for string
 *@n: nober of strings
 *Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...);
/**
 *print_all - to print all var
 *@format: pointer constant to string
 *Return: nothing
 */
void print_all(const char * const format, ...);

/**
 *struct fun - Struct operators
 *description: this structure to get all function
 *@get: a function to get
 *@id: Char pointer
*/
typedef struct fun
{
	char *id;
	void (*get)(va_list all);
} fun_t;

#endif
