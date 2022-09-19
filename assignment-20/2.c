#include<stdio.h>
#include<string.h>
void swap(char s1[],char s2[]){
    char temp[15];
    int i=0;
    strcpy(temp,s1);
    s1=strcpy(s1,s2);
    s2=strcpy(s2,temp);
    
}
int main()
{
    char s1[15]={"Saurav\0"};char s2[15]={"nagen\0"};
    swap(s1,s2);
     printf("%s %s",s1,s2);
    return 0;
}