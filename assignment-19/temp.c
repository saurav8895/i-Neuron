#include<stdio.h>
#include<string.h>

int main()
{
    char ch[1][10],c[10];
    fgets(ch[0],10,stdin);
    
    printf("before rev : %s ",ch[0]);
    strcpy(c,ch[0]);
    strrev(c);
    printf("value of new string : %s ",c);
    printf("after rev : %s ",ch[0]);

    return 0;
}