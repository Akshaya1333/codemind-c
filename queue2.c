#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
};
typedef  struct node Node;
Node*head = NULL;
Node*tail = NULL;
int size=0;
void enqueue(int val)
{
	Node *newNode=(Node*)malloc(sizeof(Node));
	newNode->data=val;
	newNode->next=NULL;
	if(head==NULL && tail==NULL)
	{
		head=newNode;
		tail=newNode;
	}
    else
    {
    	tail->next=newNode;
    	tail = newNode;
	}
	size++;
}
void dequeue()
{
	if(head == NULL && tail == NULL)
	{
		printf("queue is empty\n");
		return;
	}
		Node*todeleted=head;
		head=head->next;
		if(head==NULL)
		{
			tail=NULL;
		}
		size--;
		free(todeleted);
}
void display()
{
	if(head == NULL && tail==NULL)
	{
		printf("queue is empty\n");
		return;
	}
	Node *temp = head;
	while(temp !=NULL)
	{
		printf("%d",temp->data);
		temp = temp->next;
	}
	printf("\n");
}
void getfront()
{
	if(head==NULL&& tail==NULL)     
	{
		printf("queue is empty\n");
		return;
	}
	printf("front:%d\n",head->data);
}
void getrear()
{
	if(head==NULL&& tail==NULL)     
	{
		printf("queue is empty\n");
		return;
	}
	printf("rear:%d\n",tail->data);
}
void getsize()
{
	printf("size is:%d\n",size);
}
int main()
{
		int ch;
	//infinite loop
	while(1)
	{
		printf("enter\n1. enqueue\n2.dequeue\n3.getfront\n4. getrear\n5 . getsize\n6.Display\n");
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
			getfront();
		}
   		else if(ch==4)
		{
			getrear();
		}
		else if(ch==5)
		{
			getsize();
		}
		else if(ch==6)
		{
			display();	
		}
		else
		{
			break;
		}
   }
}
