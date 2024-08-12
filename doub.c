#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *prev;
	struct node *next;
};
//aliasing
typedef struct node Node;
//linked list head at global variable
Node *head=NULL;
Node *tail=NULL;
//function
void insert_at_head(int val)
{
	Node *newNode=(Node *)malloc(sizeof(Node));
	newNode->data=val;
	newNode->prev=NULL;
	newNode->next=NULL;
	if(head==NULL && tail == NULL)
	{
	head=newNode;
	tail=newNode;	
	}
	else
	{
		newNode->next=head;
		head->prev=newNode;
		head=newNode;
		
	}
}
void insert_at_tail(int val)
{
	Node *temp;
	Node *newNode=(Node*)malloc(sizeof(Node));
	newNode->prev=NULL;
	newNode->data=val;
	newNode->next=NULL;
	if(head==NULL)
	{
		head=newNode;
	}
else{
 Node *temp=head;
while(temp->next!=NULL)
	{
		temp=temp->next;
	}
newNode->prev=temp;
temp->next=newNode;
}
}
void delete_at_head()
{
	
 	if(head==NULL)
 	{
 		printf("There are no nodes to delete\n");
	 }
	 else{
	 	Node *temp=head;
	 	head=head->next;
	 	head->prev=NULL;
	 	temp->next=NULL;
	 	free(temp);
	 	
	 }
}
void delete_at_tail()
{
	if(head==NULL){
			printf("There are no nodes to delete\n");
	}
	else if(head->next==NULL){
		Node *delnode=head;
		head=NULL;
		free(delnode);
	}
	else
	{
		Node *temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->prev->next=NULL;
		temp->prev=NULL;
	
}
}
void display()
{
	if(head==NULL)
	{
		printf("No nodes to display\n");
		return;
	}
	else
	{
	
	Node *temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
    }
	printf("\n");
}
int main()
{
	int ch;
	//infinite loop
	while(1)
	{
		printf("enter\n1.Insert at head\n2.Insert at tail\n3.Display\n 4.Delete at head\n5.5.Delete at tail\nany other to exit\n");
		scanf("%d",&ch);
		if (ch==1)
		{
		//implement insert at head
		int val;
		printf("Enter a value for the node to be inserted: ");
		scanf("%d",&val);
		insert_at_head(val);	
		}
		else if(ch==2)
	{
		//implement insert at tail
		int val;
		printf("Enter a value for the node to be inserted: ");
		scanf("%d",&val);
		insert_at_tail(val);	
		
	}
	else if(ch==3)
	{
		// Display
		display();
	}
	else if(ch==4)
	{
		// implement delete at head
		delete_at_head();
	}
	else if(ch==5)
		{
			delete_at_tail();
		}
	else
	{
		printf("Thank you for testing.ADIEU!!\n");
		break;
	}
}
}
