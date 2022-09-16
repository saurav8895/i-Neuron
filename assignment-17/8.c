#include<stdio.h>
#include<string.h>

int main()
{
    char s[100],c[100];
     fgets(s,100,stdin);
    //  strcpy(c,s);
     for (int i = 0; s[i]; i++)
     {
        /* code */c[i]=s[i];
     }printf("copied string\n");
     printf("%s",c);
    return 0;
}