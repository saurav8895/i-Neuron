#include<stdio.h>
#include<stdlib.h>

int main()
{
    char *s;
    s=calloc(50,sizeof(char));
    fgets(s,50,stdin);
    printf("%s",s);
    free(s);
    return 0;
}