#include<stdio.h>
#include<string.h>

int main()
{
    char s[5][50];
    for (int i = 0; i < 5; i++)
    {
        fgets(s[i],50,stdin);
        /* code */
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%s ",s[i]);
        /* code */
    }
    
    return 0;
}