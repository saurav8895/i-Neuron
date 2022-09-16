#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];int cnt[95];

    fgets(s,200,stdin);
    memset(cnt,0,95*sizeof(cnt[0]));
    for (int i = 0;s[i]; i++)
    {
        cnt[s[i]-' ']++;
        /* code */
    }
    for (int i = 0; i <95; i++)
    {
        if(cnt[i]!=0)
        printf("'%c' : %d\n",' '+i,cnt[i]);
        /* code */
    }
    
    
    return 0;
}