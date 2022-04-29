#include <stdio.h>

int main()
{
    int i, low, high, mid, n, x;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter sorted array : ");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter value to find : ");
    scanf("\n%d", &x);

    low = 0;
    high = n - 1;
    
    while (low <= high){
      int mid = low + (high - low )/2;
      if (a[mid] == x)
         {
             printf("element found at %d position",mid+1);
             return 0;
         }
      if (a[mid] < x)
            low = mid + 1;
      else
            high = mid - 1;
   }
    printf("Element not found ");
    return 0;
}