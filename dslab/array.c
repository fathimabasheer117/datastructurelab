#include<stdio.h>
#define n 5
int a[20];

void largest(int b[])
{
	
	int l=0;
	for(int i=0;i<n;i++)
	{
		if(b[i]>l)
		{
		   l=b[i];
		}
	}
	
	printf("largest number is %d \n",l);

}
void smallest(int b[])
{
	
	int s=b[0];
	for(int i=0;i<n;i++)
	{
		if(b[i]<s)
		{
		   s=b[i];
		}
	}

	printf("smallest number is %d \n",s);

}
void reverse(int b[])
{
	int j=0,c[20];
	for(int i=n-1;i>=0;i--)
	{
		c[j]=b[i];
		j++;
	}
	printf("The reversed array ");
	for(int i=0;i<n;i++)
	{
		printf("%d ",c[i]);
	}
	
}

void mean(int b[])
{
	int sum=0,mean;
	for(int i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	mean=sum/5;
	printf("Mean = %d\n",mean);
}
void sum(int b[])
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+b[i];
	}
	printf("Sum = %d\n",sum);

}

void main()
{
	int ch;
	printf("Enter th elements:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Menu\n1.Largest\n2.smallest\n3.Reverse\n4.Mean\n5.sum\nEnter your choice:");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:largest(a);
		      break;
		case 2:smallest(a);
		      break;
		case 3:reverse(a);
		      break;
		case 4:mean(a);
		      break;
		case 5:sum(a);
		      break;
		default:printf("Wrong choice");
	}
}
