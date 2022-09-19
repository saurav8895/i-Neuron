#include<stdio.h>

struct employee{
    int id;
    char name[10];
    int salary;

}e1[10];
void sort(struct employee *a,int len){
    int temp;
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            if(e1[i].salary<=e1[j].salary){
                temp=e1[i].salary;
                e1[i].salary=e1[j].salary;
                e1[j].salary=temp;
            }

            /* code */
        }
        
        /* code */
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
        printf("id :%d\nname :%s\nsalary%d\n",e1[i].salary);
    }
    
    
    return 0;
}