#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: the file to be appended.
 * @text_content: text to ve appended
 * Return: 1 on success, and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int filedes;

	if (filename == NULL)
		return (-1);
	filedes = open(filename, O_WRONLY | O_APPEND);

	if (filedes == -1)
		return (-1);

	if (text_content != NULL)
		write(filedes, text_content, strlen(text_content));
	close(filedes);
	return (1);
}
