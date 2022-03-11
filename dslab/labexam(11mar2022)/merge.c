#include<stdio.h>
int main()
{
int a[5],b[5],c[10],i,j,k;
printf("enter the elements of 1st array:\n");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
printf("enter the elements of 2nd array:\n");
for(i=0;i<5;i++)
{
scanf("%d",&b[i]);
}
i=0;
j=0;
while(i<5 && j<5)
{
if(a[i]<b[j])
{
c[k]=a[i];
i++;
k++;
}
else
{
c[k]=a[j];
j++;
k++;
}
}
while(i<5)
{
c[k++]=a[i++];
}
while(j<5)
{
c[k++]=b[j++];
}
printf("merged array:\n");
for(k=0;k<10;k++)
{
printf("%d \t",c[k]);
}
return 0;
}
