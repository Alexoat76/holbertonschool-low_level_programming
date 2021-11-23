#include "main.h"

/*
 * File: 0-read_textfile.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 * Return: The actual number of letters it could read and print
 *         or If the function fails or filename is NULL - 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int openDesc, readDesc, writeDesc;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
      /* open the file */
	openDesc = open(filename, O_RDWR);
	if (openDesc == -1)
	{
		return (0);
	}
      /* malloc buffer */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}
      /* read the characters until given size */
	readDesc = read(openDesc, buffer, letters);
	if (readDesc == -1)
	{
		return (0);
	}
	    /* write the file */
	writeDesc = write(STDOUT_FILENO, buffer, readDesc);
	if (writeDesc == -1)
	{
		return (0);
	}
	    /* close the file */
	close(openDesc);
	free(buffer);
	    /* return number of chars */
	return (writeDesc);

}
