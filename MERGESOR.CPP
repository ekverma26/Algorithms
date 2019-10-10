#include<stdio.h>
#include<conio.h>
void merge_sort(int[],int,int);
void merge(int[],int,int,int);
void main()
{ 
clrscr();
int a[20],i,size;
printf("\nEnter the size of array: ");
scanf("%d",&size);
printf("\nEnter array elements: ");
for(i=1;i<=size;i++)
scanf("%d",&a[i]);
merge_sort(a,1,size);
printf("\nSorted array is:");
for(i=1;i<=size;i++)
printf("\n %d",a[i]);
getch();
}
void merge_sort(int a[],int l,int h)
{
int mid;
if(l<h)
{
mid=(l+h)/2;
merge_sort(a,l,mid);
merge_sort(a,mid+1,h);
merge(a,l,mid,h);
}
}
void merge(int a[],int l,int mid,int h)
{
int m,n,p[20],q[20],i,j,k;
m=mid-l+1;
n=h-mid;
for(i=1;i<=m;i++)
p[i]=a[l+i-1];
for(j=1;j<=n;j++)
q[j]=a[mid+j];
i=1;j=1;k=l;
while((i<=m) && (j<=n))
{
if(p[i]<=q[j])
{
a[k]=p[i];
k++;
i++;
}
else
{
a[k]=q[j];
k++;
j++;
}
}
while(i<=m)
{
a[k]=p[i];
k++;
i++;
}
while(j<=n)
{
a[k]=q[j];
k++;
j++;
}
}
