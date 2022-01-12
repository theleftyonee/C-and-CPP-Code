#include <stdio.h>
int main(){
	int a,z,c;
	float bal;
	char ch;
	printf("Welcome to Big Bank ATM!\n");
	printf("Please enter your 4 digit pin:\n");
	scanf("%d", &a);
	if(a==2521){
	printf("MAIN MENU:\n");
}
    else {
	printf("The pin you entered is invalid. You have 3 login attempts left\n");
	return 0;
}
	printf("Choose the operation you want to perform:\n");
	printf(" 1. Cash Withdrawal\n 2. Balance Inquiry\n 3. Mini Statement\n 4. Net Banking Registration\n");
	scanf("%d",&a);
		if (a==2){
			printf("Your current balance is Rs. 1,00,000 only.");
			return 0;
		}
	if (a==4){
		printf("Please visit our bank website for the registration. The website is www.BigBank.in\n");
		printf("Thankyou! Please visit again! \n");
		return 0;
	}
	if (a==1) {
		printf("Select the account from which you want to withdraw money:\n");
	}
	else {
		printf("The service you selected is not currently operational\n");
		return 0;
	}
	        printf("1. Credit\n");
		printf("2. Savings\n");
		printf("3. Current\n");
		scanf("%d", &z);
		printf("Please enter your amount:\nRs ");
		scanf("%f", &bal);
	    printf("Confirm your withdrawal:\n");
		printf("1. Yes\n");
		printf("2. No\n");
		printf("Enter the option number:");
		scanf("%d",&c);
		if (c == 1){
		printf("Your amount has been succesfully withdrawn! \n");
	}
		else {
		printf("The withdrawal process has been terminated. \n");
		}
		printf("Thankyou! Please visit again! \n");
		return 0;
	}
