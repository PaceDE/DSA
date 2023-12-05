//linearsearch

#include<stdio.h>
#define MAX 100
int search(int a[],int i,int j,int x)
{
    if(a[i]==x)
        return (i);
    else if(i==j)
        return i;
    else
    {
        search(a,i+1,j,x);
    }

}
int main()
{
    int i,j,x,location,a[MAX];
    printf("Enter then size of list: ");
    scanf("%d",&j);
    printf("\nEnter the content of list : ");
    for(i=0;i<j;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter the element to find in array: ");
    scanf("%d",&x);
    i=0;
    location=search(a,i,j,x);
    if(location==j)
    {
        printf("\n%d is not in the list",x);
    }
    else
    {
        printf("%d is in the location %d of the array",x,location+1);
    }
   printf("\n______________________________________________________\n");
        printf("Smaran Rawal\n");
        printf("______________________________________________________\n");
    return 0;
}
