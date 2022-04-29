#include<stdio.h>

int main(){
    int n,x,i,j,temp;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter array : ");
    for(i=0; i<n; i++)
    {
        scanf("\n%d",&a[i]);
    }

    for(i=0; i<n-1; i++){
        for(j=i; j<n; j++){
            if(a[j]<a[i]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("sorted array is : ");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}