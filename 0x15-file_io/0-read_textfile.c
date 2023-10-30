#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer_memory;

	if (filename == NULL)
		return (0);

	buffer_memory = malloc(sizeof(char) * letters);
	if (buffer_memory == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer_memory, letters);
	w = write(STDOUT_FILENO, buffer_memory, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer_memory);
		return (0);
	}

	free(buffer_memory);
	close(o);

	return (w);
}
