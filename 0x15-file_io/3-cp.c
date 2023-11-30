#include "main.h"

/**
 * main - copeies the content of a file to another file
 *
 * @argc: count of args entered on command line
 * @argv: arg entered
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int fileDescForFileTo, fileDescForFileFrom;

	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fileDescForFileTo = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	fileDescForFileFrom = open(argv[1], O_RDONLY);

	if (fileDescForFileFrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
		exit(98);
	}

	if (fileDescForFileTo == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	read(fileDescForFileFrom, buff, sizeof(buff));
	write(fileDescForFileTo, buff, sizeof(buff));

	if (close(fileDescForFileTo) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", 
				close(fileDescForFileTo));
		exit(100);
	}

	if (close(fileDescForFileFrom) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", 
				close(fileDescForFileFrom));
		exit(100);
	}
	return (0);
}
