#include <stdlib.h>
#include "main.h"
/**
 *count - get length
 *description: tjis function to get length of string
 *@s: string
 *Return: size
 */
int count(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	;
	return (x);
}
/**
 *argstostr - for concatenates all the arguments
 *description: this function concatenates all the arguments
 *@ac: integr
 *@av: agument
 *Return: NULL or pointer to array
 */
char *argstostr(int ac, char **av)
{
	int ar = 0;
	int x;
	int y;
	int z = 0;
	char *s;

	if (ac == 0 || av == 0)
		return (NULL);
	for (x = 0; x < ac; x++, ar++)
	{
		ar = count(av[x]);
	}
	s = malloc(sizeof(char) * ar + 1);
	if (s == 0)
	{
		return (NULL);
	}
	else
	{
		for (x = 0; x < ac; x++)
		{
			for (y = 0; av[x][y] != '\0'; y++, z++)
			{
				s[z] = av[x][y];
			}
			s[z] = '\n';
			z++;
		}
	}
	return (s);
}
