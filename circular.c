#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int queue[MAX];
int front=-1;
int rear=-1;
void enqueue(void);
void dequeue(void);
void display(void);
void peek(void);
int val;
    void main()
  {
	int choice;
	printf("\n1.enqueue \n2.dequeue \n3.display \n4.peek \n5.exit\n");
     do
  {
	printf("\n enter the choice:");
	scanf("%d",&choice);
    switch(choice)
  {
	case 1:
	enqueue();
	break;
	case 2:
	dequeue();
	break;
	case 3:
	display();
	break;
	case 4:
	peek();
	break;
	case 5:
	exit(0);
	break;
	default:
	printf("invalid entry");
   }
  }while(choice!=5);
 }
	void enqueue()
  {
       
	printf("enter value to be inserted:");
	scanf("%d",&val);
	if(front==0 && rear==MAX-1)
     {
 	printf("overflow");
     }
	if(front==-1 && rear==-1)
     {
	front=rear=0;
        
     }
	else if(rear==MAX-1 & front!=0)
     {
	rear=0;
     }
	else
     {
	rear=rear+1;
     }
	queue[rear]=val;
	printf("value inserted successfully\n");
   }
        void dequeue()
    {
        if(front==-1)
    {
	printf("underflow");
   }
      else if(front==rear)
   {
	val=queue[front];
	front=rear=-1;
        printf(" %d is element deleted successfully",val);
    }
    
   else if(front==MAX-1)
    {
    val=queue[front];
    front=0;

  }
      else
   {
     
	val=queue[front];
     front=front+1;
     printf("%d is deleted ",val);
  }
}

	void display()
    {
      int i;
	if(front==-1 && rear==-1)
	{
         printf("queue is empty");
       }
        else if(front<=rear)
       {
         
 
      for(i=front;i<=rear;i++)
      {
    printf("%d \t",queue[i]);
      }
    }
        else
    {
      for(i=front;i<MAX-1;i++)
      {
     printf("%d \t ",queue[i]);
      }
      for(i=0;i<rear+1;i++)
      {
     printf("%d \t ",queue[i]);
      }
     }
      
    }
      void peek()
   {
     if(front==-1)
   {
      printf("queue is empty");
   }
      else
    {
      printf("%d \n",queue[front]);
    }
   }

