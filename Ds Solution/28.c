#include<stdio.h>
int main(){
    int n,temp;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter array : ");
    for(int i=0; i<n; i++){
        scanf("\n%d",&a[i]);
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Sorted array is : ");
    for(int i=0; i<n; i++){
        printf("%d ",a[i]);
    }
}