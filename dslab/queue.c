#include<stdio.h>
#include<stdlib.h>
#define N 10
int queue[N],ch=1,front=-1,rear=-1,i;
void insert();
void delete();
void display();
void peek();
int main()
{
    printf("\n1.Insertion \n2.Deletion \n3.Display \n4.peek \n5.exit");
    while(ch)
    {
        printf("\nEnter the Choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            insert();
            break;
        case 2:
           delete();
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
                printf("Wrong Choice: please see the options");
            }
        }
    return 0;
}
void insert()
{
 int item;
  printf("\n enter the element to be inserted:");
  scanf("%d",&item);
  if(rear==N-1)
  {
    printf("\n Overflow");
   
  }
  if(front==-1&&rear==-1)
  {
    front=0;
    rear=0;
  }
  else
  {
    rear=rear+1;
  }
  queue[rear]=item;
  printf("\nValue inserted");
}
void delete()
{
  int item;
  if(front==-1||front>rear)
  {
    printf("undereflow");
  }
  else
  {
     item=queue[front];
     if(front==rear)
     {
       front=-1;
       rear=-1;
     }
     else
     {
       front=front+1;
     }
     printf("%d is deleted is ",item);
  }         
}
void display()
{
 printf("\nQueue Elements are:\n ");
            if(front==rear)
       {
                printf("\n Queue is Empty");
      }
            else
            {
                for(i=front; i<rear; i++)
                {
                    printf("%d",queue[i]);
                    printf("\n");
                }
            }
}
void peek()
{
if(front==-1||front>rear)
  {
    printf("\n Queue is empty");
  }
  else
  {
    printf("peek value is %d",queue[front]);
  }
}
