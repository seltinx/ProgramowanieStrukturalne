#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x = 10, y = 300;
    wskaznik(&x, &y);

    return 0;
}

void wskaznik(int *wskaznika, int *wskaznikb)
{
    if(*wskaznika > *wskaznikb)
    {
        int a = *wskaznika;
        *wskaznika = *wskaznikb;
        *wskaznikb = a;
        printf("Zamiana pomyslnie\n");
    }
    printf("x: %d, y: %d", *wskaznika, *wskaznikb);
}
