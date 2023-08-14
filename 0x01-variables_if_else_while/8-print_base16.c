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
	int al = 'a';

	while (no < 10)
	{
		putchar(no + '0');
		no++;
	}
	while (al <= 'f')
	{
		putchar(al);
		al++;
	}
	putchar('\n');
	return (0);
}
