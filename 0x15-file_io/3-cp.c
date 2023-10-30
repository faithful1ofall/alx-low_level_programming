#include "main.h"
#include <stdio.h>

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *fbuf;

	fbuf = malloc(sizeof(char) * 1024);

	if (fbuf == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (fbuf);
}

/**
 * close_file - Closes file descriptors.
 * @d: The file descriptor to be closed.
 */
void close_file(int d)
{
	int fc;

	fc = close(d);

	if (fc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", d);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int ffrom, fto, fr, fw;
	char *fbuf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fbuf = create_buffer(argv[2]);
	ffrom = open(argv[1], O_RDONLY);
	fr = read(ffrom, fbuf, 1024);
	fto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 664);

	do {
		if (ffrom == -1 || fr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(fbuf);
			exit(98);
		}

		fw = write(fto, fbuf, fr);
		if (fto == -1 || fw == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(fbuf);
			exit(99);
		}

		fr = read(ffrom, fbuf, 1024);
		fto = open(argv[2], O_WRONLY | O_APPEND);

	} while (fr > 0);
	free(fbuf);
	close_file(ffrom);
	close_file(fto);
	return (0);
}
