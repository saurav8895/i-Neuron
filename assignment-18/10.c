#include<stdio.h>
#include<string.h>

void repeated_char(char s[]){
int cnt[95];

    fgets(s,200,stdin);
    memset(cnt,0,95*sizeof(cnt[0]));
    for (int i = 0;s[i]; i++)
    {
        cnt[s[i]-' ']++;
        /* code */
    }
    printf("repeated characters are : ");
    for (int i = 0; i <95; i++)
    {
        if(cnt[i]>=2)
        printf("%c ",' '+i);
        /* code */
    }
}
int main()
{
    char s[100];
    repeated_char(s);
    
    return 0;
}