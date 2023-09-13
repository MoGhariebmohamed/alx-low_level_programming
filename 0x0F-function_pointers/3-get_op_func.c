#include "3-calc.h"
#include <stlib>
/**
 *get_op_func - for select function
 *description: function executes selects the correct function to perform the operation asked
 *@s: pointer to an array
 *Return: pointer to function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;

	while (ops[i].op != NULL && ops[i].op != *s)
	i++;

	return (ops[i]);
}
