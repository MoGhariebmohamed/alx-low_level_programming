#include "main.h"
#define MESSAGE "Usage: cp file_from file_to\n"
#define CNTREAD "Error: Can't read from file %s\n"
#define CNTWRITE "Error: Can't write to %s\n"
#define CNTCLOSE "Error: Can't close fd %d\n"
/**
 *main - for function that copy a file
 *description: this function for function for copying file
 *@count: the source counter
 *@str: the files name string pointer
 *Return: number or -1
 */
int main(int count, char **str)
{
	int file_from, file_to, close_from, close_to;
	char buffer[1024];
	ssize_t x, to_y;

	if (count != 3)
		dprintf(STDERR_FILENO, MESSAGE),
			exit(97);
	file_from = open(str[1], O_RDONLY);
	if (file_from < 0)
		dprintf(STDERR_FILENO, CNTREAD, str[1]),
		exit(98);
	file_to = open(str[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to < 0)
		dprintf(STDERR_FILENO, CNTWRITE, str[2]),
		exit(99);
	x = read(file_from, buffer, 1024);
	for (file_from = 0, file_to = 0; x > 0; )
	{
		to_y = write(file_to, buffer, x);
		if (to_y < x)
		{
			dprintf(STDERR_FILENO, CNTWRITE, str[2]),
			exit(99);
		}
	if (x < 0)
		dprintf(STDERR_FILENO, CNTREAD, str[2]),
		exit(98);
	close_from = close(file_from);
	close_to = close(file_to);
	if (close_to < 0)
		dprintf(STDERR_FILENO, CNTCLOSE, close_from),
		exit(100);
	if (close_from < 0)
		dprintf(STDERR_FILENO, CNTCLOSE, close_from),
		exit(100);
	}
	return (EXIT_SUCCESS);
}
