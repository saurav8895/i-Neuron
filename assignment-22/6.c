#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,largest=0;
    scanf("%d",&n);
    int *p=malloc(n*4);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",p+i);
        if(largest<=*(p+i))
        largest=*(p+i);
    }
    printf("%d",largest);
    free(p);
    
    return 0;
}