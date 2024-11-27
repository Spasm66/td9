#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void    egyptianFibo(int x, int y)
{
    if (x == 1)
        printf("%d\n", y);
    else
    {
        printf("%d\t", (int)ceil((double)y / (double)x));
        egyptianFibo(((-y) % x) + x, y * (int)ceil((double)y/ (double)x));
    }
}

void    egypte_it(int x, int y)
{
    int n;
    while (x != 1)
    {
        n = (int)ceil((double)y / (double)x);
        printf("%d\t", n);
        x = x * n - y;
        y = y * n;
    }
    printf("%d\n", y);
}

int main(void)
{
    egypte_it(2, 5);
}