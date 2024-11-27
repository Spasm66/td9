#include <stdio.h>
#include <stdlib.h>

double  power(double x, int n)
{
    // n recursion
    if (n == 0)
        return (1);
    return (x * power(x, --n));
}

double  power_ter(int x, int n, uint result)
{
    // 
    if (n == 0)
        return (result);
    return (power_ter(x, --n, x * result));
}

double  power_it(int x, int n)
{
    double  res;

    res = 1;
    for (int i = 0; i < n; i++)
        res *= x;
    return (res);
}

int     main(int argc, char **argv)
{
    (void)argc;
    double  res;
    //int result;

    //result = 1;
    res = power_it(atoi(argv[1]), atoi(argv[2]));
    printf("%d\n", res);
}