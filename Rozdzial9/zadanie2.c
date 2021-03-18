#include <stdio.h>
#include <stdlib.h>

void rzadCh(char ch[], int i, int j)
{
    for(int x = 0; x < j; x++)
        {
            for(int y = 0; y < i; y++)
            {
                printf("%c", ch[0]);
            }
            printf("\n");
        }
}

int main()
{
    char ch[] = "";
    int i = 10, j = 2;
    rzadCh(ch, i, j);
    return 0;
}
