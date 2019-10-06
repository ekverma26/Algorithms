#include<stdio.h>
#include<conio.h>

void quick_sort(int [],int,int);
int partition(int[],int,int);


void main()
{
clrscr();
int a[50],n,i;
printf("\nenter array size:");
scanf("%d",&n);
printf("\nenter array elements:");
for(i=1;i<=n;i++)
scanf("%d",&a[i]);
quick_sort(a,1,n);
printf("\nSorted Array:\n");
for(i=1;i<=n;i++)
printf("%d\t",a[i]);
getch();
}

void quick_sort(int a[],int lb,int ub)
{
  int k;
  if(lb<ub)
  {
    k=partition(a,lb,ub);
    quick_sort(a,lb,k-1);
    quick_sort(a,k+1,ub);
  }
}

int partition(int a[],int lb,int ub)
{
  int i=lb;
  int j=ub;
  int temp1,temp2,pivot;
  pivot=a[lb];

  while(i<j)
  {
   while(a[i]<=pivot)
   {
   i++;
   }
   while(a[j]>pivot)
   {
   j--;
   }
   if(i<j)
   {
   temp1=a[i];
   a[i]=a[j];
   a[j]=temp1;
   }
  }
  temp2=a[lb];
  a[lb]=a[j];
  a[j]=temp2;

  return j;
}
