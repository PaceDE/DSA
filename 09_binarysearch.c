#include<stdio.h>
int binarysearch(int a[],int l,int h,int key)
{
    int mid;
    if(l>h)
    {
        printf("\nSearch failed");
        return 0;
    }
    else
    {
        mid=(l+h)/2;
        if(key<a[mid])
            binarysearch(a,l,mid-1,key);
        else if(key>a[mid])
            binarysearch(a,mid+1,h,key);
        else
        {
            printf("\nSearch successful");
            return mid+1;
        }
    }
}
int main()
{
    int a[50],n,i,l,h,location,key;
    printf("Enter the size of array:");
   scanf("%d",&n);
    printf("\nEnter the array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter the key:");
    scanf("%d",&key);
    l=0;
    h=n-1;
    location=binarysearch(a,l,h,key);
    if(location==0)
        printf("\nKey %d is not in the list",key);
    else
        printf("\nKey %d is at location %d",key,location);
        printf("\n______________________________________________________\n");
        printf("Smaran Rawal\n");
        printf("______________________________________________________\n");
    return 0;
}
