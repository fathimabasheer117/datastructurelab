#include<stdio.h>
int stack[10],choice,n,top,x,i;
void push();
void pop();
void topp();
void display();

int main()
{
 top = -1;     
 printf("\n Enter the size of STACK : ");
 scanf("%d",&n);
 do
 {
 printf("\n1.PUSH\n2.POP\n3.top\n4.display\n5.exit\n");
 printf("\nEnter the choice : ");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1:
 
 push();
 break;
 
 case 2:
 
 pop();
 break;
 
 case 3:
 
 topp();
 break;
 
 case 4:
 display();
 break;
 
 case 5:
  break;
 
 default:
 
 printf ("\nInvalid Choice\n");
 }}
 while(choice!=4);
 return 0;
}

void push()
{
 if(top >= n - 1)        
 {
 printf("\nSTACK OVERFLOW\n");    

 }
 else
 {
 printf("Enter a value to be pushed : ");
 scanf("%d",&x);
 top++;             
 stack[top] = x;   
 }}

void pop()
{
 if(top <= -1)
 {
 printf("\nSTACK UNDERFLOW\n");
 }
 else
 {
 printf("\nThe popped element is %d",stack[top]);   
 top--;     
 }}

void topp()
{
 if(top==-1)
 {
printf("stack is empty");
}
 else
 {
printf("%d",stack[top]);
 }
}

void display()
{
 if(top >= 0)
 {
   
 printf("\nELEMENTS IN THE STACK\n\n");
 for(i = top ; i >= 0 ; i--)
 printf("%d\t",stack[i]);
 }
 else
 {
 printf("\nEMPTY STACK\n");
 }}
