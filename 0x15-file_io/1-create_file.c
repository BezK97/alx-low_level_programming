#include "holberton.h"

/**
 * create_file - creates a file or truncate if it exist
 *
 * @filename: file name
 * @text_content: pointer to text
 *
 * Return: 1 on success or -1 if it fails
 */
int create_file(const char *filename, char *text_content)
{
	int file, len = 0;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_CREAT | O_TRUNC | O_RDWR);
	if (file == -1)
		return (-1);
	for (len = 0; text_content[len]; len++)
		;
	if (len == 0)
		write(file, "", len);
	else
		write(file, text_content, len);
	close(file);
	return (1);
}
