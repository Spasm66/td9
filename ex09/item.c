#include <stdio.h>
#include <stdlib.h>

int nb_item(int *tab, int l, int n)
{
    if (!l)
        return (0);
    if (tab[l - 1] == n)
        return (1 + nb_item(tab, l - 1, n));
    return (nb_item(tab, l - 1, n));
}

int     main(void)
{
    int tab[] = {1, 2, 2, 2, 5};
    printf("%d\n", nb_item(tab, 5, 2));
}