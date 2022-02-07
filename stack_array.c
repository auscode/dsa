#include <stdio.h>

int stack[100],i,j,choice = 0,n,top = -1;
void push();
void pop();
void show();

int main()
{
	printf("Enter the number of elements you want to put in the stack\n");
	scanf("%d",&n);

	while(choice != 4){
		printf("\nChoose one from below\n");
		printf(" 1.Push\n 2.Pop\n 3.Show\n 4.Exit\n");
		printf("Enter the choice:  ");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				push();
				break;

			case 2:
				pop();
				break;

			case 3:
				show();
				break;

			case 4:
				printf("Exiting....\n");
				break;

			default:
				{printf("Enter the valid choice\n");
					break;}
		};
	} 
}
void push()
{
	int val;
	if (top>=n-1)
		printf("OVERFLOW\n");
	else{
		printf("Enter the value\n");
		scanf("%d",&val);
		top++;
		stack[top]=val;
	}
}
void pop()
{
	if (top == -1)
		printf("UNDERFLOW\n");
	else
		top--;	
}
void show()
{
	for (i = top;i>=0; i--)
		printf("%d\n",stack[i]);
	if (top==-1)
		printf("Stack is Empty\n");
}
