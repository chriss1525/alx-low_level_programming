#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point. multiplies two numbers
 * @argc: int. argument count
 * @argv: string. argument array
 * atoi: turns string to int
 * Return: 0 (success)
*/
int main(int argc, char *argv[])
{
    int i;
    int n;
    int c;

    if (argc > 2)
    {
        i = atoi(argv[1]);
        n = atoi(argv[2]);
        c = i * n;

        printf("%d\n", c);
        return (0);
    }
    else
    {
        printf("Error\n");
    }
    return (1);
}
