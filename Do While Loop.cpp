#include <iostream>
#include <stdio.h>
#include <conio.h>
int main(){
	int n;
	printf("Enter the numbers till when you want to get printed: ");
	scanf("%d", &n);
	int i=0;
	while(i<=n){
		printf("%d \n",i);
		i++;
	}
	return 0;
}