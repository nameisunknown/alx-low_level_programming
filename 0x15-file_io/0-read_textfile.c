#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints
 *
 * @filename: this is the file to be read
 * @letters: this is numbers of letters to be read
 * Return: the actual numbers of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fildes, noOfLettersRead;

	char *readCollector;

	if (filename == NULL)
		return (0);

	fildes = open(filename, O_RDONLY);

	if (fildes == -1)
		return (0);

	readCollector = malloc(sizeof(char) * letters);

	noOfLettersRead = read(fildes, readCollector, letters);

	if (noOfLettersRead != -1)
	{
		if (write(STDOUT_FILENO, readCollector, letters) == -1)
		{
			free(readCollector);
			return (0);
		}
	}
	else
	{
		free(readCollector);
		return (0);
	}
	free(readCollector);
	close(fildes);
	return (noOfLettersRead);
}
