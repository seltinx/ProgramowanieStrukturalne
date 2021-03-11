#include <stdio.h>
#include <stdlib.h>

int main()
{
    char znak;
    char tabela[400];
    int i = 0;
    while((znak = getchar()) != '#')
        {
            if(znak == '\n')
            {
                tabela[i] = '\\n';
            }
            else
            {
                tabela[i] = znak;
            }

            i++;
        }
    for(int x = 1; x <= i; x++)
        {
            printf("'%c'-%d, ", tabela[x - 1], (int)tabela[x - 1]);
            if(x % 8 == 0)
            {
                printf("\n");
            }
        }
    return 0;
}
