#include <stdio.h>
#include <math.h>
#include <conio.h>
int square(){
	float a,square;
	scanf("%f", &a);
	square = pow(a,2);
	printf("The square of %f is %f", a, square);
return 0;
}
int main(){
	printf("Enter a number:");
	square();
	
return 0;	
}