#include <stdio.h>
int main()
{
//f = first	l=last m=middle	i=integer
	int i,f,l,m,n,search,arr[20];
	printf("Enter the size of the arr \n");
	scanf("%d",&n);

	printf("Enter %d elements you want to put in array\n",n);
	for (i=0;i<n;i++)
		scanf("%d",&arr[i]);

	printf("Enter the value you want to find\n");
	scanf("%d",&search);

	f=0;
	l=n-1;
	m=(f+l)/2;
	while(f<=l){
		if(arr[m]<search)
			f=m+1;
		else if(arr[m]==search){
			printf("\n%d found at the location %d\n",search,m+1);
			break;
		}
		else
		l=m-1;
		m=(f+l)/2;
	}
	return 0;
}
