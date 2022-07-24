#include <iostream>
int main(){
	int n, fact=1;
	printf("Enter the number: ");
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		fact*=i;		
	}
	printf("%d \n", fact);
	return 0;
}