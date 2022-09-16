#include<stdio.h>

int main()
{
    int i;
    char s[100],temp;
    fgets(s,100,stdin);
    for (i = 0; s[i]; i++)
    {}
    for (int j = 0; j <i; j++)
    {
        for (int k = 0; k < i; k++)
        {
           if(s[j]<s[k]){
            temp=s[j];
            s[j]=s[k];
            s[k]=temp;
           }
             /* code */
        }
        /* code */
    }
    printf("%s",s);
    
    return 0;
}