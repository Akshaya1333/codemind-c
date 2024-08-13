//polynoommial representation	//adding two polynomial
#include<stdio.h>
#include<stdlib.h>
struct node
{
  float coeff;
  int expo;
  struct node *next;
};
typedef struct node Node;
Node* insert_term(Node*head,float c,int e)
{
	Node *newNode = (Node *)malloc(sizeof(Node));
	newNode->coeff = c;
	newNode->expo = e;
	newNode->next = NULL;
	if(head == NULL)
	{
		head = newNode;
	}
	else
	{
		Node *temp = head;
		while(temp->next!=NULL)
		{
			temp= temp->next;
		}
		temp->next=newNode;
	}
	return head;
}
Node* createp()
{
	Node *head = NULL;
	int n,i;//number of terms in the polynomial
	printf("enter number of terms of the polynomial:");
	scanf("%d",&n);
	for( i=1;i<=n;i++)
	{
		float co;
		int ex;
		printf("enter co-efficient  of term %d :",i);
		scanf("%f",&co);
		printf("enter exponent  of term %d:",i);
		scanf("%d",&ex);
		 head=insert_term(head,co,ex);
	}
	return head;
}
void display(Node *head)
{
	Node *temp = head;
	while(temp!=NULL)
	{
		printf("(%.1f)x^%d%c",temp->coeff,temp->expo,(temp->next==NULL)?'\n': '+');
		temp = temp->next;
	}
}
Node *add_two_polynomial(Node *poly1,Node *poly2)
{
	Node *head = NULL;
	Node *temp1 = poly1;
	Node *temp2 = poly2;
	while(temp1 !=NULL && temp2 !=NULL)
	{
		if(temp1->expo == temp2->expo)
		{
		    head =	insert_term(head,temp1->coeff + temp2->coeff, temp1->expo);
		    temp1 = temp1->next;
		    temp2 = temp2->next;
		}
		else if (temp1->expo > temp2->expo)
		{
			head =insert_term(head, temp1->coeff, temp1->expo);
			temp1 = temp1->next;
		}
		else
		{
			head = insert_term(head, temp2->coeff, temp2->expo);
			temp2 = temp2->next;
		}
	}
	Node *temp = head;
	while(temp->next !=NULL)
	{
		temp=temp->next;
	}
	if(temp1 == NULL)temp->next = temp2;
	else temp->next = temp1;
	return head;
}
int main()
{
	Node *poly1 = createp();
	Node *poly2 = createp();
	display(poly1);
	display(poly2);
	Node*result = add_two_polynomial(poly1,poly2);
	display(result);
}


