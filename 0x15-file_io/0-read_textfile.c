#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 * Return: If the function fails or filename is NULL - 0.
 *         fo/fw - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fo, fr, fw;
	char *fbuf;

	if (!filename)
		return (0);

	fbuf = malloc(sizeof(char) * letters);
	if (!fbuf)
		return (0);

	fo = open(filename, O_RDONLY);
	fr = read(fo, fbuf, letters);
	fw = write(STDOUT_FILENO, fbuf, fr);

	if (fo == -1 || fr == -1 || fw == -1 || fw != fr)
	{
		free(fbuf);
		return (0);
	}

	free(fbuf);
	close(fo);

	return (fw);
}
