#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<dos.h>
int n,a[100],i,j,key;

void input()
{
	printf("\nenter array size:");
	scanf("%d",&n);
	printf("\nenter array elements:");
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
}

void insert_sort()
{
		    for(i=2;i<=n;i++)
		    {
		      delay(100);
		      j=i-1;
		      key=a[i];

		      while(j>0 && key<a[j])
		      {
		      a[j+1]=a[j];
		      j=j-1;
		      }
		      a[j+1]=key;
		      } ;
}

void display()
{
printf("\nSorted Array:-\n");
for(i=1;i<=n;i++)
printf("\t%d",a[i]);
}

void main()
{
clrscr();
clock_t end,start;
input();
	start=clock();
	insert_sort();
	end=clock();
	display();
	printf("\nTime complexity %f",(float)(end-start)/(CLK_TCK));
getch();
}
