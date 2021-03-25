#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x = 21, y;
    int *w = &y;
    wskaznik(x, w);
    printf("%d %d", x, *w);
    return 0;
}

void wskaznik(int x, int *w)
{
    *w = x;
    printf("%d %d\n", x, *w);
}
