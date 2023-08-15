#include <stdio.h>
/**
 *main - the main function here
 *
 *description: the printing for charachter three possibibilties for 3-digits
 *Return: 0 sucess
 */
int main(void)
{
	int no = 0;
	int no2;
	int no3;

	while (no < 10)
	{
		for (no2 = no + 1; no2 < 10; no2++)
		{
			for (no3 = no2 + 1; no3 < 10; no3++)
			{
				putchar(no + '0');
				putchar(no2 + '0');
				putchar(no3 + '0');
				if (no != 7 || no2 != 8 || no3 != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		no++;
	}
	putchar('\n');
	return (0);
}
