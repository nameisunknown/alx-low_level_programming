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
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	_copy(argv[1], argv[2]);
		
	return (0);
}

void _copy(char *from, char *to)
{
	int fileDescForFileTo, fileDescForFileFrom;

	char buff[1024];

	fileDescForFileTo = open(to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
        fileDescForFileFrom = open(from, O_RDONLY);

        if (fileDescForFileFrom == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't read from %s\n", from);
                exit(98);
        }

        if (fileDescForFileTo == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to);
                exit(99);
        }

        while (read(fileDescForFileFrom, buff, sizeof(buff)))
	{
		if (write(fileDescForFileTo, buff, sizeof(buff)) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to);
			exit(99);
		}
	}

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
}
