#include "main.h"
/**
 * create_file - creates a new file
 * @filename: new file's name
 * @text_content: content of file
 * Return: 1 (success), -1 (failure)
 */
int create_file(const char *filename, char *text_content)
{
    FILE *fp;
    if (filename == NULL)
    {
        return -1;
    }
    fp = fopen(filename, "w");
    if (fp == NULL)
    {
        return -1;
    }
    if (text_content != NULL)
    {
        fprintf(fp, "%s", text_content);
    }
    fclose(fp);
    return 1;
}
