#include<stdio.h>

struct employee{
    int id;
    char name[10];
    float salary;

}e1;
int main()
{
    scanf("%d",&e1.id);
    scanf("%s",&e1.name);
    scanf("%f",&e1.salary);
    printf("id :%d\nname :%s\nsalary :%.f",e1.id,e1.name,e1.salary);
    return 0;
}