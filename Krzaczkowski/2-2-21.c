#include <stdio.h>
#include <stdlib.h>

int rekurencja(int n)
{
    if(n == 0)
    {
        return 1;
    }
    return 2 * rekurencja(n - 1) + 5;
}

int main()
{
    int n;
    scanf("%d", &n);
    if(n < 0)
    {
        printf("Zle\n");
        return -1;
    }
    printf("%d", rekurencja(n));
    return 0;
}
