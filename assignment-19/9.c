#include<stdio.h>
#include<string.h>

int fact(int n){
    if(n==1)
    return 1;
    else
    return n*fact(n-1);
}
int main()
{
    char list[6][20]={"saurav samal","nagen sahu","subhranshu barik","rabindra kar","tunguru bhola","khatua"};
    char s[20];int n;
    printf("enter your name\n");
    fgets(s,20,stdin);
    for (int i = 0; i < 6; i++)
    {
        if(strcmp(list[i],s)==0){
             break;
        }
    }

    printf("enter number to find factorial");
    scanf("%d",&n);
    printf("%d",fact(n));

    
    
    return 0;
}