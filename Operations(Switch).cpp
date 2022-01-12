#include <stdio.h>

int main (){

	float a,b;	char ch;

	printf("Enter the first number: \n");

	scanf("%f", &a);

	printf("Enter the second number: \n");

	scanf("%f", &b);

	printf("Choose the operation you want to perform:\n");

	printf(" +\n -\n *\n /\n");

	scanf(" %c", &ch);

	switch(ch){

		case '+':

		printf("%f + %f = %f",a,b,a+b);

		break;

		case '-':

		printf("%f - %f = %f",a,b,a-b);

		break;

		case '*':

		printf("%f * %f = %f",a,b,a*b);

		break;

		case '/':

		printf("%f / %f = %f",a,b,a/b);

		break;

		default:

		printf("Invalid Input");

		break;

	}

	printf("\n Thankyou for using me <3");

	return 0;

}
