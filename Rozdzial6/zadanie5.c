#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a;
    int b;
    printf("Podaj dwie liczby calk. , pierw granice dolna a potem gorna : ");
    scanf("%d %d", &a, &b);
    for(int i = a; i <= b; i++)
    {
        printf("%d | %d | %d\n", i, i * i, i * i * i);
    }
    return 0;
}
