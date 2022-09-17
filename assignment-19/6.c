#include<stdio.h>
#include<stdbool.h>
#include<string.h>

int main()
{
    char s[5][3];char c[3];
    int cnt[5];char a[]="asa";
    memset(cnt,0,5*sizeof(cnt[0]));
    for (int i = 0; i < 5; i++)
    {
        fgets(s[i],50,stdin);
    }
    for (int i = 0; i < 5; i++)
    {
       strcpy(c,s[i]);
       strrev(c);
       printf("%d",strcmp(a,s[i]));
      if(strcmp(a,s[i])==0)
      {
        printf("in if");
        cnt[i]+=1;
      }
    }
       
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",cnt[i]);
        /* code */
    }
    
    // for (int i = 0; i < 5; i++)
    // {
    //     if(cnt[i]==1)
    //     printf("%d",cnt[i]);
    //     /* code */
    // }
       
    
    return 0;
}