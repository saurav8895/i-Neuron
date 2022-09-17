#include<stdio.h>

int main()
{
    char s[5][50];
    int cnt=0;
    for (int i = 0; i < 5; i++)
    {
        fgets(s[i],50,stdin);
        /* code */
    }
    for (int i = 0; i < 5; i++)
    {
       for (int j = 0; s[i][j]; j++)
       {
        if(s[i][j]=='@'){
         cnt++;
        break;
        }
        /* code */
       }
       
        
        /* code */
    }
    if(cnt==5)
    printf("Yes");
    else
    printf("no");

    return 0;
}