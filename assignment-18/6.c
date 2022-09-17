#include<stdio.h>
#include<stdbool.h>  
#include<string.h>  

bool alpha(char s[]){
    int acnt=0,dcnt=0;
    for (int i = 0;s[i]; i++)
    {
        if(s[i]>='a'&&s[i]<='z' || s[i]>='A'&&s[i]<='Z')
        acnt++;
        if (s[i]>='0' && s[i]<='9')
        dcnt++;
    }
    if (acnt && dcnt)
    {
        return true;
    }
    else
    return false;
    
}
    
int main()
{
     char s[100];
    fgets(s,100,stdin);
     if(alpha(s))
     printf("yes");
     else
     printf("NO");

    return 0;
}