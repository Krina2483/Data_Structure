#include <stdio.h>
int main()
{
	int i,n,fact=1;
	printf("Enter the value of n :");
	scanf("%d",&n);
	for (int i = 1; i<=n; i++)
	{
		fact=fact*i;
	}
	printf("%d",fact);
	return 0;
}