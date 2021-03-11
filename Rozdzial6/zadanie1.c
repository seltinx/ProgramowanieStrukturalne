#include <stdio.h>
#include <stdlib.h>

int main(){

    char tab[26];
    int i = 0;
    char a = 'a';
    while(a <= 'z')
    {
        tab[i] = a;
        i++;
        a++;
    }
    for(int i = 0; i < 26; i++)
    {
        printf("%c\n", tab[i]);
    }
    return 0;
}
