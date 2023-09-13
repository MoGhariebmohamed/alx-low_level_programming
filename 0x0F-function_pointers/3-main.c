#include "3-calc.h"
#include <stlib>
/**
 *main - for excute the calculations
 *description: function executes the calculations
 *@s: pointer to an array
 *Return: pointer to function
 */
int main(int, int)
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
