#include <stdio.h>
/**
 *main - the main function here
 *
 *description: the printing for charachter alpha
 *Return: 0 sucess
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'Z'; ++c)
	{
	putchar(c);
	}
	putchar('\n');
	return (0);
}
