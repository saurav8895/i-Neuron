#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    fgets(s,100,stdin);
    printf("%s",strupr(s));
    for (int i = 0; s[i]; i++)
    {
        s[i]-32;
    }
    printf("%s",s);
    
    return 0;
}