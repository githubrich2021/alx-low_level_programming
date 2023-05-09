#include "main.h"

/**
* append_text_to_file - Entry point
* @filename: pointing to the file
* @text_content: add to the string
*
* Return: --1 or -1 otherwise
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int n, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	n = open(filename, O_WRONLY | O_APPEND);
	w = write(n, text_content, len);

	if (n == -1 || w == -1)
		return (-1);

	close(n);

	return (1);
}
