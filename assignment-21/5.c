#include<stdio.h>
#include<string.h>

struct employee{
    int id;
    char name[10];
    int salary;

}e1[3];
void sort(struct employee e1[],int len){
    char temp[10];
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
          if(strcmp(e1[i].name,e1[j].name)<=0){
            strcpy(temp,e1[i].name);
            strcpy(e1[i].name,e1[j].name);
            strcpy(e1[j].name,temp);
          }
            

         }
    }
}
int main()
{
    for (int i = 0; i <10; i++)
    {
        scanf("%d",&e1[i].id);
        scanf("%s",&e1[i].name);
       scanf("%d",&e1[i].salary);
    }
    sort(e1,10);
    for (int i = 0; i < 10; i++)
    {
        printf("id : %d\nname :%s\nsalary : %d",e1[i].id,e1[i].name,e1[i].salary);
    }
    
    
    return 0;
}