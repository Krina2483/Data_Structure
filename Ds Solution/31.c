#include <stdio.h>

void merge(int a[], int l, int m, int r){
    int n1, n2;
    n1 = m-l+1;
    n2 = r-m;

    int L[n1], R[n2];

    for(int i = 0 ; i<n1 ; i++)
        L[i] = a[l+i];
    for(int i = 0 ; i<n2 ; i++)
        R[i] = a[m+1+i];

    int i=0,j=0;
    int  k = l;
    while(i<n1 && j<n2){
        if(L[i]<R[j]){
            a[k] = L[i];
            i++;
        }
        else{
            a[k] = R[j];
            j++;
        }
        k++;
    }

    while(i<n1)
        a[k++] = L[i++];

    while(j<n2)
        a[k++] = R[j++];
}

void mergerSort(int a[], int l, int r){
    if(l<r){
        int m = l + (r-l)/2;
        mergerSort(a, l, m);
        mergerSort(a, m+1, r);
        merge(a, l, m, r);
    }
}

int main(){
    int n;

    printf("Enter size of array : ");
    scanf("%d", &n);
    int a[n];

    printf("\nEnter the elements of an array: \n");
    for(int i = 0 ; i<n ; i++){
        printf("%d element : ", i+1);
        scanf("%d" , &a[i]);
    }

    printf("\nBefore sorting\n");
    for(int i = 0 ; i<n ; i++)
        printf("%d ", a[i]);

    mergerSort(a, 0, n-1);

    printf("\n\nAfter sorting\n");
    for(int i = 0 ; i<n ; i++)
        printf("%d ", a[i]);

    printf("\n\n");
    return 0;
}