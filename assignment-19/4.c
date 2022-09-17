#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char c[50];
     char s[5][50];
     int i;
    for (int i = 0; i < 5; i++)
    {
        fgets(s[i],50,stdin);
        /* code */
    }
    printf("enter th finding string\n");
    fgets(c,50,stdin);
    for (i = 0; i < 5; i++)
    {
       if (strcmp(s[i],c)==0)
       {
        printf("%s present",c);
        exit(0);
        /* code */
       }
       
    }
    if (i=4)
    {
        printf("%s not present",c);
        /* code */
    }

    
    return 0;
}