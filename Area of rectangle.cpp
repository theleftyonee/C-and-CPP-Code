#include <stdio.h>
void area(float x,float y);
main(){
float a,b;
	printf("Enter the length of the rectangle (in mts):\n");
	scanf("%f", &a);
	printf("Enter the breadth of the rectangle (in mts):\n");
	scanf("%f", &b);
	area(a,b);
}
void area(float x,float y)
{
	
	x*=y;
	printf("The area of the rectangle is %f sq mts ",x);
}
