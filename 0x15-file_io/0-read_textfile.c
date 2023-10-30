#include "main.h"

/**
 * read_textfile - function to  reads textfile
 *  and prints 2 POSIX standard output.
 *  @filename: file to be printed to standard output
 *  @letters: character string to be printed to standard output
 *  Return: # of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_desc;
	ssize_t num_rd, num_wr;
	char *buff;

	if (!filename)
		return (0);
	file_desc = open(filename, O_RDONLY);

	if (file_desc == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	num_rd = read(file_desc, buff, letters);
	num_wr = write(STDOUT_FILENO, buff, num_rd);
	close(file_desc);
	free(buff);

	return (num_wr);
}
