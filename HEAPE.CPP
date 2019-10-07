#include<stdio.h>
#include<conio.h>

void heapify(int [],int,int);
void build_heap(int [],int);
void heap_sort(int [],int);

void main()
{
int a[10],i;
clrscr();
printf("\nenter array elements:");
for(i=1;i<=10;i++)
  {
scanf("%d",&a[i]);
  }

build_heap(a,10);
heapify(a,1,10);
heap_sort(a,10);

printf("\nSorted array is:");
for(i=1;i<=10;i++)
printf("\n%d",a[i]);
getch();
}

void heapify(int a[],int i,int n)
{
int left,right,max,temp;
left=(2*i);
right=(2*i)+1;

if(left<=n && a[left]>a[i])
   {
max=left;
   }
else
   {
max=i;
   }
if(right<=n && a[right]>a[max])
   {
max=right;
   }
if(i!=max)
   {
temp=a[max];
a[max]=a[i];
a[i]=temp;

heapify(a,max,n);
   }
}

void build_heap(int a[],int n)
{
int j;
for(j=n/2;j>=1;j--)
  {
	heapify(a,j,n);
  }
}
void heap_sort(int a[],int n)
{
int tmp,j;
build_heap(a,n);
for(j=n;j>=1;j--)
  {
tmp=a[j];
a[j]=a[1];
a[1]=tmp;

heapify(a,1,j-1);
  }
}
