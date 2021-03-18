#include <stdio.h>
#include <stdlib.h>

int potega(int n)
{
    int a = 2;
    for(int i = 1; i < n; i++)
    {
       a *= 2;
    }
    return a;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", potega(n));
    return 0;
}
