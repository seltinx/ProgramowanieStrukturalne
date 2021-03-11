#include <stdio.h>
#include <stdlib.h>

int main()
{

    char znak;
    int zamiana = 0;

    while((znak = getchar()) != '#')
    {
        if(znak == '.')
        {
            zamiana++;
        }
        else if(znak == '!')
        {
            zamiana++;
        }
    }
    printf("Liczba zamian: %d\n", zamiana);
    return 0;
}

