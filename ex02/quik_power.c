#include <stdio.h>
#include <stdlib.h>

int power(int x, int n)
{
    // n/2 appel au max
    if (n % 2)
    {
        if (n == 1)
            return (x);
        n -= 2;
        return ((x * x) * power(x, n));
    }
    else
    {
        if (n == 0)
            return (1);
        n -= 2;
        return ((x * x) * power(x, n));
    }
    return (-1);
}

int power_it(int x, int n)
{
    int s;
    int d;

    s = n;
    d = 1;
    if (n % 2)
        s -= 1;
    for (int i = 0; i < s / 2; i++)
        d *= x * x;
    if (n % 2)
        return (d * x);
    printf("ok\n");
    return (d);
}

int main(int argc, char **argv)
{
    (void)argc;
    int res;
    //int result;

    //result = 1;
    res = power_it(atoi(argv[1]), atoi(argv[2]));
    printf("%d\n", res);
}