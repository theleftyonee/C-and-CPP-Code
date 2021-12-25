#include <stdio.h>
int main(){
	float p,c,m,e,per;
	printf("Enter your marks in Physics:\n");
	scanf("%f",&p);
	printf("Enter your marks in Chemistry:\n");
	scanf("%f",&c);
	printf("Enter your marks in Mathematics:\n");
	scanf("%f",&m);
	printf("Enter your marks in English:\n");
	scanf("%f",&e);
	per = (p+c+m+e)/4;
    printf("Your percentage is %f",per);
return 0;
	
}
