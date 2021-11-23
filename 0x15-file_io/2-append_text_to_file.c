#include "main.h"

/*
 * File: 2-append_text_to_file.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

/**
 * append_text_to_file - append text and only if file exists.
 * @filename: file.
 * @text_content: appends this content into file.
 * Return: 1 on success, -1 on error.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int openDesc, writeDesc, len;

	if (filename == NULL)
		return (-1);
      /* open file if it exists */
	openDesc = open(filename, O_APPEND | O_WRONLY);
	if (openDesc == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			;
      /* write */
		writeDesc = write(openDesc, text_content, len);
		if (writeDesc == -1)
			return (-1);
	}
	close(openDesc);
	return (1);
}
