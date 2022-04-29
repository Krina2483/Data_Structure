#include <stdio.h>
int main()
{
    int i,n,n1,n2,a[20],index[20],k;
    printf("Enter length of Array : ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("Array %d :",i);
        scanf("%d",&a[i]);
    }
    printf("Enter n1 : ");
    scanf("%d",&n1);
    printf("Enter n2 : ");
    scanf("%d",&n2);
    for(i=0; i<n; i++)
    {
        if(a[i]==n1)
        {
            a[i]=n2;
            index[k]=i;
            k++;
        }
    }
    if(k==0)
    {
        printf("%d does not exist in array",a[i]);
    }
    else
    {
        printf("index where we replaced : ");
        for(i=0; i<n; i++)
        {
            printf("%d\n",index[i]);
        }
    }
    printf("Final array");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}