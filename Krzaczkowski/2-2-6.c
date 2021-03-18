#include <stdio.h>
#include <stdlib.h>

int potega(int n, int m)
{
    if(n == 0 && m == 0)
    {
        printf("Zle\n");
        return -1;
    }

    if(n < 0 || m < 0)
    {
        printf("Zle\n");
        return -1;
    }

    int a = n;

    for(int i = 1;i < m; i++)
    {
        a *= n;
    }
    return a;
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    printf("%d", potega(n, m));
    return 0;
}

