#include<stdio.h>
#include<string.h>

struct marks{
    char roll_number[10];
    char name[10];
    int chem_marks;
    int math_marks;
    int phy_marks;


}s[5];
int main()
{
    float sum[5];
    memset(s,0,5*sizeof(s[0]));
    for (int i = 0; i < 5; i++)
    {
        scanf("%s",&s[i].roll_number);
        scanf("%s",&s[i].name);
        scanf("%d",&s[i].chem_marks);
        scanf("%d",&s[i].math_marks);
        scanf("%d",&s[i].phy_marks);
        sum[i]+=(float)(s[i].chem_marks+s[i].math_marks+s[i].phy_marks)/300;
    }
    for (int i = 0; i < 5; i++)
    {
        
    printf("roll_number : %s\nname :%s\ntotal percentage :%f%%\n",s[i].roll_number,s[i].name,(sum[i]*100));
    }
    
    return 0;
}