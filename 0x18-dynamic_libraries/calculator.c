#include "list.h"

/**
 *add - the main function to add
 *@a: the first input
 *@b: the second input
 *description: this function to add
 *Return: n for absalute value
 */
int add(int a, int b)
{
	int n;

	n = a + b;
	return (n);
}
/**
 *sub - the main function to sub
 *@a: the first input
 *@b: the second input
 *description: this function to sub
 *Return: n for absalute value
 */
int sub(int a, int b)
{
	int n;

        n = a - b;
        return (n);
}
/**
 *sub - the main function to mul
 *@a: the first input
 *@b: the second input
 *description: this function to mul
 *Return: n for absalute value
 */
int mul(int a, int b)
{
	int n;

        n = a * b;
        return (n);
}
/**
 *sub - the main function to div
 *@a: the first input
 *@b: the second input
 *description: this function to div
 *Return: n for absalute value
 */
int diiv(int a, int b)
{
	int n;

    if (b == 0)
    {
        printf("Erorr: division by zero");
        return 0;
    }
        n = a / b;
        return (n);
}
/**
 *sub - the main function to mod
 *@a: the first input
 *@b: the second input
 *description: this function to mod
 *Return: n for absalute value
 */
int mod(int a, int b)
{
	int n;

    if (b == 0)
    {
        printf("Erorr: division by zero");
        return 0;
    }
    n = a % b;
        return (n);
}
