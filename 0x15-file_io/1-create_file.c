#include "main.h"

/**
 * create_file - function creates a new textfile
 * @filename: file to be reated
 * @text_content: characters inside created file
 * Return: 1, if successful, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int File_Desc;
	int NUM_Ltrs;
	int Rtrn_WR;

	if (!filename)
		return (-1);
	File_Desc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (File_Desc == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	for (NUM_Ltrs = 0; text_content[NUM_Ltrs]; NUM_Ltrs++)
		;
	Rtrn_WR = write(File_Desc, text_content, NUM_Ltrs);
	if (Rtrn_WR == -1)
		return (-1);
	close(File_Desc);
	return (1);
}
