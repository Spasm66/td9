#include <stdio.h>
#include <stdlib.h>

int modulo(int a, int b)
{
    if (a < b)
    {
        return (a);
    }
    return (modulo(a - b, b));
}

int main(int argc, char **argv)
{
    (void)argc;
    int res;
    //int result;

    //result = 1;
    res = modulo(atoi(argv[1]), atoi(argv[2]));
    printf("%d\n", res);
}