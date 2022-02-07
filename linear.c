#include <stdio.h>
int main()
{
	int arr[20],i,x,n;
	printf("Size of Array\n");
	scanf("%d",&n);

	printf("Enter the elements you want in array\n");
	for (i=0;i<n;i++)
		scanf("%d",&arr[i]);

	printf("Enter the element you want to search\n");
	scanf("%d",&x);
	
	for (i=0;i<n;++i){
		if (arr[i]==x)
		 break;
		 }

	if (i<n)
		printf("Element found at index %d \n",i);
	else
		printf("Element not found");
	return 0;
}
