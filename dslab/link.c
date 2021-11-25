#include<stdio.h>
#include<stdlib.h>
struct node
  {
 int data;
 struct node*link;
};
 int ch,i=0,x,n;
struct node *head,*newnode,*temp;
void insert();
void display();
void count();
void search();
void main()
{
printf("\n1.insert\n2.display\n3.count\n4.search\n5.exit\n");
 do
{
printf("\n enter an option:");
scanf("%d",&ch);
switch(ch)
 {
 case 1:
 
 insert();
 break;
 
 case 2:
 
 display();
 break;
 
 case 3:
 
 count();
 break;
 
 case 4:
 search();
 break;
 
 case 5:
  break;
 
 default:
 
 printf ("\nInvalid Choice\n");
 }}
while(ch!=5);
}
void insert()
{

 newnode=(struct node *)malloc(sizeof(struct node));
 printf("enter data:");
 scanf("%d",&x);
 newnode->data=x;
if(head==NULL)
{
 head=temp=newnode;
}
else
 {
 temp->link=newnode;
 temp=newnode;
}
 printf("node added successfully");
}
void display()
{
temp=head;
printf("elements are:");
while(temp!=NULL)
{
printf("%d \t",temp->data);
temp=temp->link;
}
}
void count()
{
temp=head;
while(temp!=NULL)
{
i=i+1;
temp=temp->link;
}
printf("no. of nodes in list:%d \n ",i);
}

void search()
{
 printf("enter data to search");
 scanf("%d",&n);
i=0;
temp=head;
while(temp->data!=n)
{
i=i+1;
temp=temp->link;
}
if(temp->data==n)
{
printf("%d found in position %d",n,i);
}
else
{
printf("elements not found \n");
}
}
 
