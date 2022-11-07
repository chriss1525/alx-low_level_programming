#include <stdio.h>
/**
 * main - entry point prints arguments passed
 * @argc: argument count
 * @argv: array of arguments passed
 * Return: 0 (success)
*/
int main(int argc, char *argv[])
{
    int i;

    if (argc > 1)
    {
        while (i < argc)
    {
        printf("%s\n", argv[i]);
        i++;
    }
    }
    return (0);
}
