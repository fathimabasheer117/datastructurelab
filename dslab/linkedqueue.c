#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *newnode,*head,*temp,*preptr,*ptr;
int i,x,n,op,d;
void enqueue();
void dequeue();
void peek();
void display();
	void main()
      {
	printf("\n1:enqueue(Insert)\n2:dequeue(Delete)\n3:Display front element\n4:Display Element\n5:Exit\n");
	do{
	printf("\nEnter an option:");
	scanf("%d",&op);
	switch(op)
      {
	case 1:enqueue();
	break;
	case 2:dequeue();
	break;
	case 3:peek();
	break;
	case 4:display();
	break;
	default:printf("invalid option\n");
      }
      }while(op!=5);
     }
void enqueue()
	{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter data to insert:");
	scanf("%d",&x);
	newnode->data=x;
     if(head==NULL)
  {
    	head=newnode;
   }
   else
  {
   	temp=head;
  while(temp->next!=NULL)
  {
    	temp=temp->next;
  }
   	temp->next=newnode;
  }
  	printf("Element inserted at the end\n");
   	temp=head;
  while(temp!=NULL)
 {
  	printf("%d\t",temp->data);
  	temp=temp->next;
   }
}
void dequeue()
{
    if(head==NULL)
   {
	printf("Empty linked queue\n");
   }
    else
  {
	temp=head;
        head=temp->next;
	free(temp);
	printf("Element deleted successfully\n");
	temp=head;
   while(temp!=NULL)
  {
	printf("%d\t",temp->data);
	temp=temp->next;
  }
  }
}
void peek()
{
   if(head==NULL)
  {
	printf("Empty linked stack\n");
  }
     else
    {
	temp=head;
	printf("Element at the front=%d\n",temp->data);
    }
}
void display()
{
    if(head==NULL)
   {
	printf("Empty linked queue\n");
   }
else
   {
	temp=head;
   while(temp!=NULL)
   {
	printf("%d\t",temp->data);
	temp=temp->next;
   }
   }
}
