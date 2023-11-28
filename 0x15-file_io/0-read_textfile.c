#include "main.h"

/**
 * read_textfile - Function that reads a text file
 * @filename: Fetches the argument filename
 * @letters: Amount of string to be read
 *
 * Return: the bytes_read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *input_buffer;
	ssize_t bytes_read = 0, bytes_written;
	size_t length = 0;
	int file;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file < 0)
		return (0);

	input_buffer = malloc(letters + 1);
	if (input_buffer == NULL)
	{
		close(file);
		return (0);
	}
	bytes_read = read(file, input_buffer, letters);
	if (bytes_read < 0)
	{
		free(input_buffer);
		close(file);
		return (0);
	}
	length += bytes_read;
	input_buffer[bytes_read] = '\0';
	bytes_written = write(STDOUT_FILENO, input_buffer, bytes_read);
	if (bytes_written < 0)
	{
		free(input_buffer);
		close(file);
		return (0);
	}
	free(input_buffer);
	close(file);
	return (length);
}
