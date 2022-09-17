#include<stdio.h>
#include<string.h>
int main()
{
    char s[10][50],temp[50];
     for (int i = 0; i < 19; i++)
   {
     fgets(s[i],50,stdin);
    /* code */ 
   }
   for (int i = 0;i<9; i++)
   {
      for (int j = i+1; j < 10; j++)
      {
        if(strcmp(s[i],s[j])>0){
         strcpy(temp,s[i]);
       strcpy(s[i],s[j]);
       strcpy(s[j],temp);
        }
        /* code */
      }
      
    /* code */ 
   }
   
    for (int i = 0; i<10; i++)
    {
        printf("%s",s[i]);
        /* code */
    }
    
    return 0;
}