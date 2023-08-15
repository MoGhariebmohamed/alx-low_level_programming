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
	int no2 = 1;

	while (no < 10)
	{
		while (no2 < 10)
		{
		putchar(no + '0');
		putchar(no2 + '0');
		if (no != 9 && no2 != 9)
		{
		putchar(',');
		putchar(' ');
		}
		no2++;
		}
		no++;
	}
	putchar('\n');
	return (0);
}
