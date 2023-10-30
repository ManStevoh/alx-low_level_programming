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
	int of, wf, lenth_memo = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenth_memo = 0; text_content[lenth_memo];)
			lenth_memo++;
	}

	of = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wf = write(of, text_content, lenth_memo);

	if (of == -1 || wf == -1)
		return (-1);

	close(of);

	return (1);
}
