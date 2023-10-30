#include "main.h"

/**
 * append_text_to_file - add text to afile
 * @filename: file name
 * @text_content: text content
 * Return: 1 is success and -1 if fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i,  num = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND | S_IWUSR | S_IRUSR);

	if (fd < 0)
		return (-1);

	num = strlen(text_content) - 1;

	if (!text_content)
		return (-1);

	while (text_content[num])
		num++;
	i = write(fd, text_content, num);

	if (i != num)
		return (-1);

	close(fd);

	return (1);
}
