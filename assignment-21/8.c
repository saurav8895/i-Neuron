#include<stdio.h>
#include<string.h>

struct student{
    char name[10];
    char roll_number[10];
    float cgpa;

}e1[10];
int main()
{
    for (int i = 0; i <10; i++)
    {
      scanf("%d",&e1->name);
    scanf("%s",&e1->roll_number);
    scanf("%f",&e1->cgpa);  
    }
    for (int i = 0; i <10; i++)
    {
    printf("id :%s\nname :%s\nsalary :%.d\n",e1[i].name,e1[i].roll_number,e1[i].cgpa);
     
    }
    
    
    return 0;
}