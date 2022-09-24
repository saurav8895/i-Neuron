#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char * input(){
    char *s = malloc(30);
    fgets(s,30,stdin);
    
    return s;
}
int main()
{
    char *s = input();
    for (int i = 0; *(s+i); i++)
    {
       printf("%c",*(s+i));
    }
    printf("%d",strlen(s));
    
    free(s);
    return 0;
}