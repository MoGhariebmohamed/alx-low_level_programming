#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 *create_file - for function that creates a file
 *description: this function for function that creates a file
 *@filename: the file name
 *@text_content:  NULL terminated string to write to the file
 *Return: number or 0
 */
int create_file(const char *filename, char *text_content)
{
	int openfile, x;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		x = 0;
		while (filename[x] != '\0')
		{
			x++;
		}
	}

	openfile = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (openfile == -1)
		return (-1);

	openfile = write(openfile, text_content, x);
	if (openfile == -1)
	{
		return (-1);
	}
	close(openfile);
	return (1);
}
