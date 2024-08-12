//stack implementation using  linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
typedef struct node Node;
Node *head = NULL;
int top=-1;
int size;
void PUSH(int ele)
{
	if(top == size-1)
	{
		printf("stack is full\n");
		return;
	}
	Node *new_node = (Node *)malloc(sizeof(Node));
	new_node->data = ele;
	new_node->next = NULL;
	if(head == NULL)
	{
		head = new_node;
	}
	else
	{
		new_node->next = head;
		head = new_node;
	}
	top++;
}
void POP()
{
	if(head == NULL)
	{
		printf("stack is empty\n");
		return;
	}
	else
	{
		head=head->next;
	}
}
void display()
{
	if(head == NULL)
	{
		printf("stack is empty\n");
		return;
	}
	else
	{
	Node *temp = head;
	while(temp !=NULL)
	{
		printf("%d ",temp->data);
		temp = temp->next;
	}
  }
}
int main()
{
	printf("enter size of the stack :");
	scanf("%d",&size);
	int ch;
	while(1)
	{
		printf("enter\n1.PUSH\n2.POP\n3.Display\n4.Any other to exit\n");
		scanf("%d",&ch);
		if(ch==1)
		{
			int ele;
			printf("enter an element to push:");
			scanf("%d",&ele);
			PUSH(ele);
		}
		else if( ch ==2)
		{
			POP();
		}
		else if(ch == 3)
		{
	     		display();	
		}
		else
		{
			break;
		}
	}
}
