#include <stdio.h>
int main()
{
    int a[50],n,i;
    int *p = a;
    printf("Enter size of an array : ");
    scanf("%d", &n);
    printf("Enter elements in array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&*p);
        p++;   
    }
    p = a;

    printf("Array elements: ");
    for (i = 0; i < n; i++)
    {
        printf("%d, ",*p);
        p++;
    }

    return 0;
}