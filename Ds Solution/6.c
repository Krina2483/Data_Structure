#include <stdio.h>
int main() 
{
    int a[100][100], b[100][100], i, j;
    
    printf("\nEnter elements of 1st matrix:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++) 
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter elements of 2nd matrix:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++) 
        {
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }

    printf("\nSum of two matrices: \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++) 
        {
            printf("%d   ", a[i][j] + b[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}