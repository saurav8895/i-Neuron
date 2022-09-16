#include<stdio.h>

int main()
{
    int i=0;char c;int cnt=0;
    char s[20];
    fgets(s,20,stdin);
    scanf("%c",&c);
    for (i = 0; s[i]; i++)
    {
        if(s[i]==c)
        cnt++;
        /* code */
    }
    printf("%d",cnt);
    return 0;
}