#include <iostream>
int main(){
	int product, a;
	printf("You want the table of: ");
	scanf("%d", &a);
	
for(int i=1; i<=10; i++){
	printf("%d \n", a*i);
}
return 0;
}