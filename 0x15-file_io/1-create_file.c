#include "main.h"

/**
 * create_file - create a file
 * @filename: file to be created
 * @text_content: text to be inputted
 * Return: returns 1 on success
 */

int create_file(const char *filename, char *text_content)
{
	int fp, i, num = 0;

	if (!filename)
		return (-1);

	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fp < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[num])
		{
			num++;
			i = write(fp, text_content, num);
			if (i != num)
				return (-1);
		}
	}

	close(fp);

	return (1);
}
