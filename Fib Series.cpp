#include <stdio.h>
int main (){
int fib,n,a=0,b = 1;
printf("Enter the number for Fib series:\n");
scanf("%d", &n);
for (int i = 0; i<= n-2;i++){
	fib = a+b;
	a = b;
	b = fib;
	printf("%d ",fib);
}	
 return 0;
}