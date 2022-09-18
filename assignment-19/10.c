#include<stdio.h>
#include<string.h>

int main()
{
    char c1[20],c2[20];int i=0;char ch,name_pos=0;
    char name[5][20]={"saurav\0","nagen\0","khatua\0","subhranshu\0","rabindra\0"};
    char pass[5][20]={"8895\0","8917\0","9938\0","6370\0","0098\0"};
    do
    {
        printf("Enter your name :");
        scanf("%s",&c1);
        for (i = 0; i < 5; i++)
        {
            if(strcmp(name[i],c1)==0)
            {
                name_pos=i;
                printf("name position = %d\n",i);
                break;
            }
        }
        if(i==5)
        printf("invalid usser name!..");
        else{
        printf("Enter your password :");
         scanf("%s",&c2);
        if(strcmp(pass[name_pos],c2)!=0)
        printf("Invalid password!!");
        else
        printf("you have successfully logged in.\n");

        }
        printf("do you want to enter again ?(Y/N)\n");
        fflush(stdin);
        scanf("%c",&ch);
    } while (ch=='y'||ch=='Y');
    
    
     
    return 0;
}