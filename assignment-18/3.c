#include<stdio.h>
#include<string.h>
int compare(char s[],char c[]){
    int i;
    for (i = 0; s[i] && c[i]; i++)
    {
         if(s[i]!=c[i])
         return 0;
           /* code */
    }
    return 1;
}
int main()
{
    char s[100],c[100];
    fgets(s,100,stdin);
    fgets(c,100,stdin);
    if((strlen(s)==strlen(c))&&compare(s,c))
    printf("strings are equal");
    else
    printf("strings are not  equal");

    
    return 0;
}