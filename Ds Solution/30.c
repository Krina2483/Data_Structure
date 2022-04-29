#include <stdio.h>
int main()
{
    int n,min,temp;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n-1; i++){
        min=i;
        for(int j=i+1; j<n; j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        temp=a[min];
        a[min]=a[i];
        a[i]=temp;        
    }
    printf("Sorted array is : ");
    for(int i=0; i<n; i++){
        printf("%d ",a[i]);
    }
    return 0;
}
