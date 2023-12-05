#include<stdio.h>
#include<conio.h>
int fibonacci(int);
int main(){
	int n, i;
	printf("Enter the number of element you want in series :");
	scanf("%d",&n);
	printf("fibonacci series is : ");
	for(i=0;i<n;i++) {
		printf("%d  ",fibonacci(i));
	}
	     printf("\n______________________________________________________\n");
    printf("Smaran Rawal\n");
    printf("______________________________________________________\n");
            return 0;
}
int fibonacci(int i){
	if(i<=1)
        return i;
	else return (fibonacci(i-1)+fibonacci(i-2));
}
