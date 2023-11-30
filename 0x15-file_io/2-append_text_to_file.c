#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * standard output.
 * @filename: Name of the file to append.
 * @text_content: NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fdd, res_write, leng;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		fdd = open(filename, O_WRONLY | O_APPEND);
		if (fdd == -1)
			return (-1);
		leng = 0;
		while (*(text_content + leng) != '\0')
			leng++;
		res_write = write(fdd, text_content, leng);
		if (res_write == -1)
		{
			close(fdd);
			write(STDOUT_FILENO, "fails", 5);
			return (-1);
		}
	}
	close(fdd);
	return (1);
}
