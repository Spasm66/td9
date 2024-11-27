#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool    find_item(int *tab, int l, int n)
{
    if (l == 0)
        return (false);
    if (tab[l - 1] != n)
        return (find_item(tab, l - 1, n));
    return (true);
}

int     main(void)
{
    int tab[] = {1, 2, 3, 4, 5};
    if (find_item(tab, 5, 5))
        printf("ok\n");
    else
        printf("non\n");
}