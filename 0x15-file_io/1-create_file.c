#include "main.h"
#include <string.h>

/**
 * create_file - create file pointer
 * @filename: pointer file
 * @text_content: number od letters
 * Return: Returns: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int point, writing, length;

	if (filename == NULL)
	{
		printf("file is empty");
		return (-1);
	}

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
		{
			length++;
		}
	}


		point = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
		writing = write(point, text_content, strlen(text_content));

		if (writing == -1)
		{
			printf("unable to write to file");
			return (-1);
		}
		if (point == -1)
		{
			printf("file can not open");
			return (-1);
		}

		close(point);
		return (1);
}
