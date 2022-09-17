#include<stdio.h>
#include<string.h>
void lower(char s[]){
     for (int i = 0; i<strlen(s)-1; i++)
    {
    printf("%C",s[i]+32);
    }
}
int main()
{
    char s[100];
    fgets(s,100,stdin);
    lower(s);
    return 0;
}