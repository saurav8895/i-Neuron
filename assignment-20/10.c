#include<stdio.h>
#include<string.h>
void rev(char *p,int len){
    char temp;
  for (int i = 0; i <= len; i++)
  {
    if(i<=((len-1)/2))
         {
            temp=*(p+i);
            p[i]=*(p+(len-i));
            *(p+(len-i))=temp;
         }
  }
  
}
int main()
{
    char s[20];
    fgets(s,20,stdin);
    rev(s,(strlen(s)-1));
    printf("%s",s);
    return 0;
}