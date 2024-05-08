#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
};           
typedef struct node Node;
Node *head=NULL;
void insert_at_head(int val)
{
	//create node to insert
	Node *newNode = (Node *)malloc(sizeof(Node));
	newNode->data = val;
	newNode->next = NULL;
	if(head == NULL)
	{
		head=newNode;
		head->next = head;
	}
	else
	{
		Node *temp = head;
		//reach the last node
		while(temp->next != head)
		{
			temp=temp->next;
		}
		temp->next=newNode;
		newNode->next=head;
		head = newNode;
	}
}
void display()
{
	if(head==NULL) printf("Linked list is empty\n");
	else
	{
		Node *temp = head;
		do{
			printf("%d ", temp->data);
			temp = temp->next;
		}
		while(temp != head);
		printf("\n");
	}
}
void display_n_nodes()
{
	int i,n;
	printf("Enter no.of nodes to display: ");
	scanf("%d",&n);
	Node *temp = head;
	for(i=0;i<n;i++)
	{
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}
int main()
{
	int ch;
	while(1)
	{
		printf("Element\n1.Insert at head\n2.Insert at tai\n3.Display\n4.Display_n_nodes\n any other");
		scanf("%d",&ch);
		if(ch==1)
		{
			//implement insert at head
			int val;
			printf("Enter a value for the node to be inserted: ");
			scanf("%d", &val);
			insert_at_head(val);
		}
		else if(ch==2)
		{
			//implement insert at tail
		}
		else if(ch==3)
		{
			display();
		}
		else if(ch==4)
		{
			display_n_nodes();
		}
		else
		{
			printf("Thank u\n");
			break;
		}
	}
}
