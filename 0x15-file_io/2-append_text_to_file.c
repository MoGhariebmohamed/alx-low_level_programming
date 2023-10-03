#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 *append_text_to_file - for function that append a file
 *description: this function for function that append a file
 *@filename: the file name
 *@text_content:  NULL terminated string to write to the file
 *Return: number or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int openfile, x;

	if (filename == NULL)
		return (-1);
	openfile = open(filename, O_WRONLY | O_APPEND);
	if (openfile == -1)
		return (-1);

	if (text_content != NULL)
	{
		x = 0;
		while (text_content[x] != '\0')
		{
			x++;
		}

	openfile = write(openfile, text_content, x);
	if (openfile == -1)
		return (-1);
	}

	close(openfile);
	return (1);
}
