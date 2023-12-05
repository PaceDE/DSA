#include<stdio.h>
int HCF(int, int);
int main()
{
  int x,y;
  printf("Enter the value of x and y:");
  scanf("%d %d", &x, &y);
  printf("HCF of (%d,%d) = %d",x,y,HCF(x,y));
   printf("\n______________________________________________________\n");
        printf("Smaran Rawal\n");
        printf("______________________________________________________\n");
  return 0;
}
int HCF(int x, int y)
{
    if(y==0)
        return x;
    else
        return (HCF(y,x%y));
}
