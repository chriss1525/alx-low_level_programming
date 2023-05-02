#include "main.h"
/**
 * append_text_to_file -  appends text at the end of a file
 * @filename: name of file
 * @text_content: content within file
 * Return: 1 (success) -1 (failure)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp;

	if (filename == NULL)
	{
		return (-1);
	}
	fp = fopen(filename, "a");
	if (fp == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		fprintf(fp, "%s", text_content);
	}
	fclose(fp);
	return (1);
}
