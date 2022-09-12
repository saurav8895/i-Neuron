#include<stdio.h>

void print(int n){
    
    if (n <= 0)
    {
        return;
    }
    print(n / 2);
    printf("%d", n % 2);
}
int main()
{
    int n;
    scanf("%d",&n);
    print(n);
    return 0;
}