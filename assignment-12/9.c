#include <stdio.h>

void print(int n)
{
    if (n <= 0)
    {
        return;
    }
    print(n / 8);
    printf("%d", n % 8);
}

int main()
{
    int n;
    scanf("%d", &n);
    print(n);
    return 0;
}