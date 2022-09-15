#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int len;
    scanf("%d", &len);
    int a[len],temp[len], n;
    printf("enter the shift size");
    scanf("%d", &n);
    char d[7];

    fflush(stdin);
    // fgets(d, 6, stdin);
    scanf("%s",&d);

    for (int i = 0; i < len; i++)
    {
        scanf("%d", &a[i]);
        temp[i]=a[i];
        /* code */
    }
    for (int i = 0; i < len; i++)
    {
       if (strcmp(d, "left")==0)
        {
           
            if (i<n)
            {
                a[(i-n)+len] = temp[i];
            }
            else
            a[i-n]=temp[i];
        }

         if (strcmp(d, "right")==0)
        {
            if (n<i)
            {
                a[(i+n)-len] = temp[i];
            }
            else
            a[i+n]=temp[i];
        }
    }
    printf("after shifting %d position\n",n);
    for (int i = 0; i < len; i++)
    {
       printf("%d\n",a[i]);
    }

    return 0;
}