#include <iostream>
int main(){
	int n;
	do {
		printf("Enter a number: ");
		scanf("%d", &n);
		printf("%d\n", n);
		
		if(n % 2 != 0){
			break;
		}
	} while(1);
	
	return 0;
}