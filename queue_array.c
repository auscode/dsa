#include <stdio.h>
#include <stdlib.h>
#define n 5

int main()
{
	int queue[n],ch=1,front = 0,rear=0,i, j=1,x=n;
	printf("\n1.Insertion \n2.Deletion \n3.Dislay \n4.Exit\n");
	while(ch)
	{
		printf("\nEnter the choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				if (rear==x)
					printf("\nQueue is full");
				else{
					printf("\nInsert the number %d\t",j++);
					scanf("%d",&queue[rear++]);
				}
				break;

			case 2:
				if (front==rear)
					printf("\nQueue is Empty");
				else{
					printf("\nDeleted Element is %d",queue[front++]);
					x++;
				}
				break;

			case 3:
				printf("\nQueue Elements are : \n");
				if (front == rear )
					printf("\nQueue is Empty");
				else{
					for (i =front; i<rear;i++){
						printf("%d",queue[i]);
						printf("\n");
					}
				}
				break;

			case 4:
				exit(0);
				break;

			default:
				printf("Wrong choice...\nPlease check the options again");
		}
	}
	return 0;
}
