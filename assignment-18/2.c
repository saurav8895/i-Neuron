#include<stdio.h>
void rev(char s[],int i){
    char temp;
    for (int j = 0; j < i; j++)
     {
        if(j<(i-1)/2){
         temp=s[j];
         s[j]=s[(i-1)-j];
         s[(i-1)-j]=temp;
        }
         printf("%c",s[j]);
        /* code */
     }
}
int main()
{
    char s[100];
    int i;
    fgets(s,100,stdin);
    for (i = 0; s[i]; i++)
    {
        /* code */
    }
    rev(s,i);
    
    return 0;
}