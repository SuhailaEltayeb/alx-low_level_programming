#include "main.h"
#include <stdio.h>

void Check_File(int F_F, int F_T, char *argv[]);

/**
 * main - function to copy contents from file 2 another
 * @argc: arg count
 * @argv: arg string
 * Return: if successful, 0
 */
int main(int argc, char *argv[])
{
	int F_F, F_T, ERROR_C;
	ssize_t Num_Ch, NUM_wr;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	F_F = open(argv[1], O_RDONLY);
	F_T = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	Check_File(F_F, F_T, argv);

	Num_Ch = 1024;
	while (Num_Ch == 1024)
	{
		Num_Ch = read(F_F, buffer, 1024);
		if (Num_Ch == -1)
			Check_File(-1, 0, argv);
		NUM_wr = write(F_T, buffer, Num_Ch);
		if (NUM_wr == -1)
			Check_File(0, -1, argv);
	}
	ERROR_C = close(F_F);
	if (ERROR_C == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", F_F);
		exit(100);
	}
	ERROR_C = close(F_T);
	if (ERROR_C == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", F_T);
		exit(100);
	}
	return (0);
}
/**
 * Check_File - function to check if file open
 * @F_F: file to copy from
 * @argv: arg vector
 * @F_T: file to copy to
 * Return: void
 */
void Check_File(int F_F, int F_T, char  *argv[])
{
	if (F_F == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (F_T == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
