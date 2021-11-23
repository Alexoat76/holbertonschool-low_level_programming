#include "main.h"

/*
 * File: 1-create_file.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

/**
 * create_file - creates file with permissions rw------- and writes
 *               content in, if file already exists, don't change
 *               permissions and just truncate it.
 * @filename: name to give to new file
 * @text_content: writes this content into file
 * Return: 1 on success, -1 on error
 */

int create_file(const char *filename, char *text_content)
{
	int openDesc, writeDesc, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
      /* create with permissions if file doesn't exist, else truncate */
	openDesc = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

      /* write the file */
	writeDesc = write(openDesc, text_content, len);

	if (openDesc == -1 || writeDesc == -1)
		return (-1);

	close(openDesc);

	return (1);

}
