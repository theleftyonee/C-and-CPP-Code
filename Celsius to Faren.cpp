// Program for Temperature Conversion
#include <stdio.h>
#include <conio.h>
float tempf()
{
	float c,faren;
	printf("Enter the temperature in degree celsius: ");
	scanf("%d", &c);
	faren = (c * 9.0 / 5.0) + 32.0;
	printf("The temperature in farenheit is: %f F", faren);
	return faren;
}
float cemp()
{
	float d, cels;
	printf("Enter the temperature in degree farenheit: ");
	scanf("%f", &d);
	cels = 5.0/9.0 * (d - 32.0);
	printf("The temperature in degree celsius is: %f C", cels);
	return cels;
}
int main(){
	int option;
	printf("What do you want to convert? \n");
	printf("1. C to F \n");
	printf("2. F to C \n");
	printf("Choose the appropriate option! \n");
	scanf("%d", &option);
	if (option == 1) {
        tempf();
	}
	else {
		cemp();
	}
return 0;
}