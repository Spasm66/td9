#include <stdio.h>
#include <stdlib.h>

void    countdown(int n)
{
    if (n != 0)
    {
        printf("%d\n", n);
        countdown(n - 1);
    }
    else
        printf("GO GO GO !!!\n");
}

int     main(void)
{
    countdown(5);
}