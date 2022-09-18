#include<stdio.h>
#include<string.h>
int max(int a,int b){
    return (a>b)?a:b;
}
int min(int a,int b){
    return (a>b)?b:a;
}
int main()
{
     char s[5][10];char c1[10],c2[10];
     for (int i = 0; i < 5; i++)
     {
        fgets(s[i],10,stdin);
     }
     printf("enter two strings\n");
     fgets(c1,10,stdin);
     fgets(c2,10,stdin);
     int c1_pos=0,c2_pos=0;
     for (int i = 0; i < 5; i++)
     {
        if(strcmp(s[i],c1)==0){
           c1_pos=i;
        }
        if(strcmp(s[i],c2)==0){
           c2_pos=i;
        }
        
     }
     int dist1=max(c1_pos,c2_pos)-(min(c1_pos,c2_pos)+1);
     int dist2=(5-(max(c1_pos,c2_pos)+1)+(0+min(c1_pos,c2_pos)));
     printf("%d",min(dist1,dist2));
     
     
    return 0;
}