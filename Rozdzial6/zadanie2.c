#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i = 1; i <=5; i++)
    {
        for(int x = 1; x <= i; x++)
        {
            printf("$");
        }
        printf("\n");
    }
    return 0;
}
