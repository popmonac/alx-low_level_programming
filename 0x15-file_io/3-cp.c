#include "main.h"
#include <stdio.h>

/**
 * error_file - This checks if files can be opened.
 * @file_locate: gets file_locate.
 * @file_destination: gets file_destination.
 * @argv: arguments vector.
 * Return: no return.
 */
void error_file(int file_locate, int file_destination, char *argv[])
{
	if (file_locate == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_destination == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - thischeck the code for ALX School students.
 * @argc: number of arguments
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int file_locate, file_destination, err_close;
	ssize_t nchars, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_locate file_destination");
		exit(97);
	}

	file_locate = open(argv[1], O_RDONLY);
	file_destination = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_locate, file_destination, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(file_locate, buf, 1024);
		if (nchars == -1)
			error_file(-1, 0, argv);
		nwr = write(file_destination, buf, nchars);
		if (nwr == -1)
			error_file(0, -1, argv);
	}

	err_close = close(file_locate);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_locate);
		exit(100);
	}

	err_close = close(file_destination);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_locate);
		exit(100);
	}
	return (0);
}