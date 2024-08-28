#include<stdio.h>
int q[100];
int size;
int front=0;
int rear=0;
void enqueue(int val)
{
	if(rear-front == size)
	{
		printf("Queue is full\n");
		return;
	}
	q[rear]=val;
	rear++;
}
void dequeue()
{
	if(front == rear)
	{
		printf("Queue is empty\n");
		return;
	}
	printf("%d is deleted\n",q[front]);
	front++;
}
void display()
{
    if(front == rear)
	{
		printf("Queue is empty\n");
		return;
	}
	int i;
	for(i=front;i<rear;i++)
	{
		printf("%d ",q[i]);
	}
	printf("\n");
}
int main()
{
	printf("enter the size of the queue: ");
	scanf("%d",&size);
	int ch;
	while(1)
	{
		printf("enter\n1.Enqueue\n2.dequeue\n3.display\nan other to exit\n");
		scanf("%d",&ch);
		if(ch==1)
		{
			int val;
			printf("enter a value to insert into queue: ");
			scanf("%d",&val);
			enqueue(val);
		}
		else if(ch==2)
		{
			dequeue();
		}
		else if(ch==3)
		{
			display();
		}
	}
}
