#include<stdio.h>

int main()
{
    char s[10];
    fgets(s,10,stdin);
    char *p;
    p=s;int i=0;
    for (i = 0;*(p+i); i++)
    {
        
    }
    printf("%d",i-1);
    
    return 0;
} 