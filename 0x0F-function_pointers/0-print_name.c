#include "main.h"
#include "function_pointers.h"
/**
 *print_name - for print a name
 *description: this function for print a name
 *@name: string pointer for name
 *@f: pointer to
 *Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	
	f(name);
}
