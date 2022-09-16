#include<stdio.h>

int main()
{
    char s[100];
    int dcnt=0,acnt=0,scnt=0,i;
    fgets(s,100,stdin);
    for (i = 0; s[i]; i++)
    {
        /* code */
    }
    s[i-1]='\0';
    
    for (int i = 0; s[i]; i++)
    {
        if ((s[i]>='a'&&s[i]<='z'))
        {
           acnt++;
        }
        else if((s[i]>='A'&&s[i]<='Z'))
        {
           acnt++;
        }
        else if(s[i]>='0' && s[i]<='9')
        {
            dcnt++;
        }
        else
        scnt++;
        
        /* code */
    }
    printf("alphabet count =%d\ndigit count =%d\nspecialcharacter count =%d",acnt,dcnt,scnt);
    
    return 0;
}