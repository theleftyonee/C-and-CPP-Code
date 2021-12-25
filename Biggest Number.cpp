// A program to the find the biggest number among the three numbers
#include <stdio.h>
int main(){
	int a,b,c;
	printf("Enter the first number:\n");
	scanf("%d",&a);
	printf("Enter the second number:\n");
	scanf("%d",&b);
    printf("Enter the third number:\n");
    scanf("%d",&c );
    if(a > b && a > c){
    	printf("%d is bigger than %d and %d",a,b,c);
	}
    else if (b > a && b > c){
    	printf("%d is bigger than %d and %d",b,a,c);
	}
	else{
	  	printf("%d is bigger than %d and %d",c,a,b);
	}
	printf(" \nThankyou for using me <3 ");
    return 0;
}
