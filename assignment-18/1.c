#include<stdio.h>

int length(char s[]){
    int i;
        for (i = 0; s[i]; i++)
    {

        /* code */
    }
    return i;
}
int main()
{
    char s[100];
    fgets(s,200,stdin);
    printf("%d",length(s));
    return 0;
}