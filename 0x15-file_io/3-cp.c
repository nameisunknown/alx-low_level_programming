#include "main.h"

/**
 * main - copies the content of a file to another file
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

/**
 * _copy - copies the details, brain box
 *
 * @from: copies from here
 * @to: copies into here
 */
void _copy(char *from, char *to)
{
	int fileDescForFileTo, fileDescForFileFrom;

	char buff[1024];

	ssize_t totalNumberOfBytesRead;

	fileDescForFileTo = open(to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	fileDescForFileFrom = open(from, O_RDONLY);

	_printReadErrorMsg(fileDescForFileFrom, from);

	_printWriteErrorMsg(fileDescForFileTo, to);

	while ((totalNumberOfBytesRead = read(fileDescForFileFrom,
					buff,
					sizeof(buff))) > 0)
	{
		if (write(fileDescForFileTo, buff, totalNumberOfBytesRead) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to);
			exit(99);
		}
	}

	if (totalNumberOfBytesRead == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", from);
		exit(98);
	}

	_close(fileDescForFileTo);
	_close(fileDescForFileFrom);
}

/**
 * _close - closes the opened descriptor
 *
 * @fd: the filedescriptor
 */

void _close(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
				close(fd));
		exit(100);
	}
}

/**
 * _printReadErrorMsg - prints the read error msg
 *
 * @fd: the file descriptor identifying the id
 * @from: where to read from
 */

void _printReadErrorMsg(int fd, char *from)
{
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", from);
		exit(98);
	}
}

/**
 * _printWriteErrorMsg - prints the write error msg
 *
 * @fd: the file descriptor
 * @to: where to write to
 */

void _printWriteErrorMsg(int fd, char *to)
{
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to);
		exit(99);
	}
}
