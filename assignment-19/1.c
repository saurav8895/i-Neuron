#include<stdio.h>

int  vowel_cnt(char s[]){
     int cnt=0;
   for (int i = 0; s[i]; i++)
   {
    if(s[i]=='a'|| s[i]=='A' ||s[i]=='e'|| s[i]=='E' ||s[i]=='i'|| s[i]=='I' ||s[i]=='o'|| s[i]=='O' ||s[i]=='u'|| s[i]=='U' )
    cnt++;
    /* code */
   }
   return cnt;
}
int main()
{
    char s[3][100];
   for (int i = 0; i < 3; i++)
   {
     fgets((s+i),100,stdin);
    
    /* code */ 
   }
   
//    fgets(s,200,stdin);
    for (int i = 0; i < 3; i++)
    {
        printf("%d : %d\n",i,vowel_cnt((s+i)));
        /* code */
    }

    
    return 0;
}