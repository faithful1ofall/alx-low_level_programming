#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fo, fw, flen = 0;

	if (!filename)
		return (-1);

	if (NULL != text_content)
	{
		while (text_content[flen])
			flen++;
	}

	fo = open(filename, O_CREAT | O_RDWR | O_TRUNC, 600);
	fw = write(fo, text_content, flen);

	if (fo == -1 || fw == -1)
		return (-1);

	close(fo);

	return (1);
}
