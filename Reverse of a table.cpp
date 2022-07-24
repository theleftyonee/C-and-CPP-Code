#include <iostream>
int n, table;
int main(){
	printf("Enter a number and I will reverse it's table for you: ");
	scanf("%d", &n);
	for(int i=10; i>=1; i--){
	table = n*i;
		printf("%d \n", table);
	}
return 0;	
}