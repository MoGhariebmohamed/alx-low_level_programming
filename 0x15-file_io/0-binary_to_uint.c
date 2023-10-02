#include "main.h"
#include <stdlib.h>
/**
 *read_textfile - for change reads a text file and prints it to the POSIX
 *description: this function for that reads a text file and prints it to the POSIX
 *@filename: the file name
 *@letters:  number of letters it should read and print
 *Return: number unsigned or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t open, read, write;
	char *x;

	if (filename == NULL)
		return (0);
	x = malloc(sizeof(char) * letters);
	if (x == NULL)
		return (0);

	open = open(
	for (x = 0; *b != '\0'; )
	{
		if (*b != '0' && *b != '1')
			return (0);

		x = x * 2 + (*b++ - 48);
	}
	return (x);
}
