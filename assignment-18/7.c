#include<stdio.h>
#include<stdbool.h>
#include<string.h>

bool palindrom(char s[],int i){
    char c[i],temp;
    for (int j = 0; j < i; j++)
     {
        if(j<(i-1)/2){
         temp=s[j];
         s[j]=s[(i-1)-j];
         s[(i-1)-j]=temp;
        }
         printf("%c",s[j]);
        /* code */
     }
     strcpy(s,c);
     if (strcmp(c,s)==0)
     {
        return true;
        /* code */
     }
     else
     return false;
     
}

int main()
{
    char s[100];int i;
    fgets(s,100,stdin);
    for (i = 0; s[i]; i++)
    {
        /* code */
    }
    
    if(palindrom(s,i))
    printf("\nyes");
    else
    printf("\nno");

    return 0;
}