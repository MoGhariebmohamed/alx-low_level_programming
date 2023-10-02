#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 *read_textfile - for change reads a text file and prints it to the POSIX
 *description: this function for that reads a text file and prints it
 *@filename: the file name
 *@letters:  number of letters it should read and print
 *Return: number unsigned or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t openfile;
	char *x;

	if (filename == NULL)
		return (0);
	x = malloc(sizeof(char) * letters);
	if (x == NULL)
		return (0);

	openfile = open(filename, O_RDONLY);
	if (openfile == -1)
	{
		free(x);
		return (0);
	}

	openfile = read(openfile, x, letters);
	if (openfile == -1)
	{
		free(x);
		return (0);
	}
	openfile = write(STDOUT_FILENO, x, openfile);
	if (openfile == -1)
	{
		free(x);
		return (0);
	}
	free(x);
	close(openfile);
	return (openfile);
}
