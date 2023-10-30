#include "main.h"

/**
 * append_text_to_file - function to append text to ebd of file
 * @filename: name of file to append to
 * @text_content: text to be appended
 * Return: 1 if successful, -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int File_Desc;
	int NUM_Ltrs;
	int Rturn_WR;

	if (!filename)
		return (-1);

	File_Desc = open(filename, O_WRONLY | O_APPEND);
	if (File_Desc == -1)
		return (-1);
	if (text_content)
	{
		for (NUM_Ltrs = 0; text_content[NUM_Ltrs]; NUM_Ltrs++)
			;
		Rturn_WR = write(File_Desc, text_content, NUM_Ltrs);
		if (Rturn_WR == -1)
			return (-1);
	}
	close(File_Desc);
	return (1);
}
