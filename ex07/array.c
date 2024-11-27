#include <stdio.h>
#include <stdlib.h>

void    print_array(int *tab, int n)
{
    if (n != 0)
    {
        printf("%d\t", tab[n - 1]);
        print_array(tab, n - 1);
    }
    else
        printf("\n");
}

int     main(void)
{
    int tab[] = {1, 2, 3, 4, 5};
    print_array(tab, 5);
}