#include <stdio.h>
/**
 *main - the main function here
 *
 *description: the printing for charachter alpha
 *Return: 0 sucess
 */
int main(void)
{
	int no = 0;

	while (no < 10)
	{
	putchar(no + '0');
	no++;
	}
	putchar('\n');
	return (0);
}
