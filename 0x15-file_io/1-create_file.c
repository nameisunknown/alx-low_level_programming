#include "main.h"

/**
 * create_file - creates a file and write to it
 *
 * @filename: file to be created
 * @text_content: content to be written to the created file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int filedescriptor, numbytes;

	if (filename == NULL)
		return (-1);

	filedescriptor = open(filename, O_WRONLY | O_CREAT | O_EXCL, 0600);

	if (filedescriptor != -1)
		return (-1);
	if (text_content == NULL)
	{
		close(filedescriptor);
		return (1);
	}

	numbytes = write(filedescriptor, text_content, strlen(text_content));

	if (numbytes == -1)
	{
		close(filedescriptor);
		return (-1);
	}
	close(filedescriptor);
	return (1);
}
