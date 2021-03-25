#include <stdio.h>
#include <stdlib.h>

int main()
{

    const int x = 10, y = 1337;
    printf("%d + %d = %d", x, y, dodawanie(&x, &y));

    return 0;
}



int dodawanie(const *wskaznikx, const *wskazniky)
{
    int z = *wskaznikx + *wskazniky;
    return z;
}
