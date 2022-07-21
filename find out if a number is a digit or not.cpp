// Program to find out if a number is a digit or not
#include <stdio.h>
#include <conio.h>
int main(){
	int isadigit = 1, notadigit = 0;
	printf("Enter a number:");
	scanf("%d", &isadigit);
	printf("%d \n", isadigit>=0 && isadigit<10);
	
	return 0;
}