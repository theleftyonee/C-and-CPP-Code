#include <stdio.h>
int main (){
	int arr1[5] = {2,3,4,8,7};
	int arr2[5] = {5,3,2,9,4};
	int arr3[5];
	for (int i=0;i<5;i++){
		arr3[i] = arr1[i] + arr2[i];
	}
	printf("The resultant sum array will be:\n");
	for(int i = 0; i<5; i++){
		printf(" %d", arr3[i]);
	}
	return 0;
}