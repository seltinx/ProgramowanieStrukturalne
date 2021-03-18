#include <stdio.h>
#include <stdlib.h>

double min(double x, double y)
{
    if(x > y) return y;
    return x;
}

int main()
{
    double x = 20, y = 25;
    printf("%g %g\n", x, y);
    printf("Mniejsza liczba  jest: ");
    printf("%g", min(x, y));

    return 0;
}
