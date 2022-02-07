#include <stdio.h>

int main()
{
	int arr[50],i,n;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	for (i=0;i<n;i++){
		printf("enter arr[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	printf("Here's your array\n");
	for (i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
