#include "main.h"

/**
 * read_textfile - read the file in a text
 * @filename: pointer to file name
 * @letters:number of letter it should print
 * Return: return lenght of the output
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int i, num, fp;
	char *buf;

	if (filename == NULL)
		return (0);

	fp = open(filename, O_RDONLY);
	if (fp < 0)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
	{
		free(buf);
		return (0);
	}

	i = read(fp, buf, letters);

	if (i < 0)
	{
		free(buf);
		return (0);
	}

	buf[i] = '\0';
	close(fp);

	num = write(STDOUT_FILENO, buf, i);
	if (num < 0)
	{
		free(buf);
		return (0);
	}
	return (num);
}
