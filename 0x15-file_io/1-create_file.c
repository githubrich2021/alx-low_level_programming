#include "main.h"

/**
* create_file - Entry point
* @filename: pointing to the file to be created
* @text_content: write a string to the file
*
* Return: --1 or -1 if the funtion fails
*/

int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	/**** TEXT CONTENT****/

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
