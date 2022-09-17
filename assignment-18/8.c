#include<stdio.h>
int words(char s[]){
    int cnt=0;
    for (int i = 0; s[i]; i++)
    {
        if (s[i]==' ' && i!=0)
        {
            cnt++;/* code */
        }
        
        /* code */
    }
    return cnt+1;
}
int main()
{
    char s[100];
    fgets(s,100,stdin);
    printf("%d",words(s));

    return 0;
}