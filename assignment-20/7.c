#include<stdio.h>

int main()
{
    char s[10];
    fgets(s,10,stdin);
    char *ptr;int vcnt=0,ccnt=0;
    ptr=s;
    for (int i = 0; *(ptr+i); i++)
    {
        printf("for check");
        if((*(ptr+i)>='a' && *(ptr+i)<='z') || (*(ptr+i)>='A' && *(ptr+i)<='Z'))
        {
            printf("first if check");
            if(*(ptr+i)=='a' ||*(ptr+i)=='A' ||*(ptr+i)=='e' ||*(ptr+i)=='E' ||*(ptr+i)=='i' ||*(ptr+i)=='I' ||*(ptr+i)=='o' ||*(ptr+i)=='O' ||*(ptr+i)=='u' ||*(ptr+i)=='U')
            {
              vcnt++;
            }else
            ccnt++;
        }
    }
    printf("vowels :%d  consonants :%d",vcnt,ccnt);
    return 0;
}