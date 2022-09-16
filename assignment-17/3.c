#include<stdio.h>

int main()
{
   char s[200];
   int cnt=0;
   fgets(s,200,stdin);
   for (int i = 0; s[i]; i++)
   {
    if(s[i]=='a'|| s[i]=='A' ||s[i]=='e'|| s[i]=='E' ||s[i]=='i'|| s[i]=='I' ||s[i]=='o'|| s[i]=='O' ||s[i]=='u'|| s[i]=='U' )
    cnt++;
    /* code */
   }
   printf("%d",cnt);
    return 0;
}