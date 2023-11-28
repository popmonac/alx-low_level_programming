#include "main.h"


/**
 * create_file - This Function creates a file.
 *
 * @filename: gets the argument filename
 * @text_content: gets the text to passed
 *
 * Return: 1 for SUCCESS OR -1 for FAILURE
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t bytes_written;
	mode_t file_permissions = S_IRUSR | S_IWUSR;

	if (text_content == NULL)
	{
		file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, file_permissions);
		if (file == -1)
			return (-1);
	}
	else
	{
		file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, file_permissions);
		if (file == -1)
			return (-1);
		bytes_written = write(file, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			close(file);
			return (-1);
		}

		close(file);
	}

	return (1);
}
