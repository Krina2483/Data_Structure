#include <stdio.h>
 
int main()
{
    int c, r, k, sum = 0;
    int first[10][10], second[10][10], multiply[10][10];
    
    printf("Enter elements of first matrix\n");
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 2; c++)
        {
            printf("Enter element a%d%d: ", r + 1, c + 1);
            scanf("%d", &first[r][c]);
        }
    }
 
    printf("\nEnter elements of second matrix\n");
    for (r = 0; r < 2; r++)
    {
        for (c = 0; c < 3; c++)
        {
            printf("Enter element b%d%d: ", r + 1, c + 1);
            scanf("%d", &second[r][c]);
        }
    }
        
    printf("\nProduct of the matrices:\n");
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++) 
        {
            for (k = 0; k < 2; k++) 
            {
                sum = sum + first[r][k]*second[k][c];
            }
            multiply[r][c] = sum;
            sum=0;
            printf("%d\t", multiply[r][c]);
        }
      printf("\n");
    }

  return 0;
}