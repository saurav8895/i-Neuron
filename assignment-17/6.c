#include<stdio.h>
#include<string.h>

int main()
{
    char s[100],temp;
    int i;
    fgets(s,100,stdin);
    // strrev(s);
    // printf("%s\n",s);
    for (i = 0; s[i]; i++)
    {
        /* code */
    }
    printf("%d\n",i);
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
     
    
    return 0;
}