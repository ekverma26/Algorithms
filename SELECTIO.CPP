#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();
int arr[100],i,j,n,s;
printf("\nenter array size:");
scanf("%d",&n);
printf("\nenter array elements:");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);

for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
	 if(arr[i]>arr[j])
	 {
	   s=arr[i];
	   arr[i]=arr[j];
	   arr[j]=s;
	 }
	}
}

printf("\nsorted array:\n");
for(i=0;i<n;i++)
printf("%d\t",arr[i]);

getch();
}
