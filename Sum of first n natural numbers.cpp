#include <iostream>
int main(){
	int n;
	printf("Enter the number of numbers that  you want the sum of: ");
	scanf("%d", &n);
	int sum = 0;
	for(int i=1; i<=n; i++){
	sum = sum + i;
}
	printf("The sum is %d \n",sum);
return 0;
}