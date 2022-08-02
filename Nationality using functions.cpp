// Program of functions to print the greeting word according to the natonality given by the user
#include <stdio.h>
#include <conio.h>
#include <math.h>
void Namaste(){
	printf("Namaste");
}
void Bonjour(){
	printf("Bonjour!");
}
int main(){
	int i,f;
	printf("What is your nationality? \n");
	printf("Choose the appropriate option below:\n");
	printf("1. Indian\n");
	printf("2. French\n");
	scanf("%d",&f);
	if(f==1){
		Namaste();
	}
		else{
			Bonjour();
		}
	return 0;
	}
