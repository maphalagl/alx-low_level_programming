#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdf;
	ssize_t nan, nor;
	char *buff;

	if (!filename)
		return (0);

	fdf = open(filename, O_RDONLY);

	if (fdf == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buff)
		return (0);

	nan = read(fdf, buff, letters);
	nor = write(STDOUT_FILENO, buff, nan);

	close(fdf);

	free(buff);

	return (nor);
}
