#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char s[3][20];char c[4];int cnt[3],count=0;
    memset(cnt,0,3*4);
    for (int i = 0; i < 3; i++)
    {
        scanf("%s",&s[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        count=0;
        char *c=strtok(s[i],".");
        while(c!=NULL)
        {
            int x=atoi(c);
        if(x>=0 && x<=255){
        count++;
        c=strtok(NULL,".");
        }else
        break;
        }
        if(count==4)
        printf("%d is valid\n",i);
        
    }  
    
    

    return 0;
}