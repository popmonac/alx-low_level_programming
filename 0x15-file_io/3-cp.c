#include "main.h"

/**
 * cp - This Funtion copies content from file1 to file2
 * @file1: gets the main file
 * @file2: gets the file to be copied to
 *
 * Return: Nothing
 */
void cp(const char *file1, const char *file2);
void cp(const char *file1, const char *file2)
{
	int file_a, file_b, errno_aclose, errno_bclose;
	char buffer[1024];
	ssize_t bytes_read, bytes_written;

	file_a = open(file1, O_RDONLY);
	if (file_a < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", file1);
		exit(98);
	}
 file_b = open(file2, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if  file_b < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", file2);
		exit(99);
	}
	while ((bytes_read = read(file_a, buffer, 1024)) > 0)
	{
		if (bytes_read == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", file1);
			close(file_a);
			close file_b);
			exit(98);
		}
		bytes_written = write file_b, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", file2);
			close(file_a);
			close file_b);
			exit(99);
		}
	}
	errno_aclose = close(file_a);
	if (errno_aclose == -1)
	{
		dprintf(2, "Error: Can't close %d", errno_aclose);
		exit(100);
	}
	errno_bclose = close file_b);
	if (errno_bclose == -1)
	{
		dprintf(2, "Error: Can't close %d", errno_bclose);
		exit(100);
	}
}


/**
 * main - Funtion that pass the args to my cp function
 * @argc: The number of args passed
 * @argv: The args passed "string"
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
		dprintf(2, "Usage: cp file_from file_to\n");
	else
		cp(argv[1], argv[2]);
	return (0);
}
