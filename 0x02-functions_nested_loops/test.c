#include <stdio.h>

int main(void)
{
    char c;

    for (c = 'a'; c < 'a' + 10; c++)
    {
        putchar(c);
    }
    putchar('\n');
    return (0);
}
