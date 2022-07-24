#include <iostream>
int first, second, sum = 0;
int main(){
	printf("Enter first number: ");
	scanf("%d", &first);
	printf("Enter second number: ");
	scanf("%d", &second);
	for(int i=first; i<=second; i++){
	sum += i;	
	}
	printf("The sum of all numbers between %d and %d is %d \n",first, second, sum);
return 0;	
}