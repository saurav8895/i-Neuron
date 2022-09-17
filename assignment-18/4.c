#include<stdio.h>

void upper(char s[]){
     for (int i = 0; s[i]; i++)
    {
    printf("%C",s[i]-32);
    }
}
int main()
{
    char s[100];
    fgets(s,100,stdin);
    upper(s);
    return 0;
}