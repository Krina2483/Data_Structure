#include<stdio.h>
int main(){
    int n,temp,j;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter array : ");
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    for (int i = 1; i < n; i++) {
        temp = a[i];
        j = i - 1;
 
        while (j >= 0 && a[j] > temp) {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = temp;
    }
    for(int i=0; i<n; i++){
        printf("%d ",a[i]);
    }
}