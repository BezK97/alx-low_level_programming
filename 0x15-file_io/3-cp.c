#include "holberton.h"

int main(int argc, char *argv[])
{
	int file_from, file_to, len = 0;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[0]);
		exit(98);
	}

	file_to = open(argv[2], O_CREAT | O_APPEND | O_WRONLY, 0664);
	if (file_to == -1)
	{
		close(file_from);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]);
		exit(99);
	}
	if (read(file_from, buffer, 1024) == - 1)
	{
		dprintf(STDERR_FILENO,
                        "Error: Can't read from file %s\n", argv[0]);
		exit(98);
	}
	for (; buffer[len] != '\0'; len++)
		;
	if (write(file_to, buffer, len) == - 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]);
		exit(99);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", file_to);
		exit(100);
	}
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", file_from);
		exit(100);
	}
	return (0);
}
