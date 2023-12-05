#include <stdio.h>
#define MAX 100
void quick_sort(int[],int,int);
int partition(int[],int,int);
int main() {
  int a[MAX],n,i,j,temp;
    printf("Enter the number of Data item: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;++i)
        scanf("%d",&a[i]);
    quick_sort(a,0,n-1);
    printf("\nData after sorting: ");
    for(i=0;i<n;++i)
        printf("%d ",a[i]);
     printf("\n______________________________________________________\n");
        printf("Dipesh shrestha\n");
        printf("______________________________________________________\n");
    return 0;
}
void quick_sort(int a[ ],int l,int u)
{
int j;
if(l<u)
{ j=partition(a,l,u);
quick_sort(a,l,j-1);
quick_sort(a,j+1,u);
}
 }
int partition(int a[],int l,int u)
{
int pivot,start,end,temp;
pivot=a[l];
start=l;
end=u;
while(start<end)
{
    while(a[start]<=pivot)
        start++;
    while (a[end]>pivot)
        end--;
    if (start<end)
    {
       temp=a[start];
       a[start]=a[end];
       a[end]=temp;
    }
}
temp=a[l];
       a[l]=a[end];
       a[end]=temp;
       return end;

}
