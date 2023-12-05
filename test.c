#include<stdio.h>
int main()
{
    int a[100],P[100];
    int n=3,x=1;
    for(int i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    P[n]=a[n];
    printf("%d\n",P[n]);
     for(int i=n;i>0;i--)
    {
        P[i-1]=a[i-1]+x*P[i];
        printf("p[%d]=%d \n",i-1,P[i-1]);
    }



}
