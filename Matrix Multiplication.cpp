#include <stdio.h>

int main()
{
    int i, j, k, r1, c1, r2, c2;
    int arr1[5][5] = {{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
    int arr2[5][5] = {{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
    int arr3[5][5] = {{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
    
    printf("Enter the row and column of First Matrix:\n");
    scanf("%d %d",&r1,&c1);
    printf("Enter the elements of First Matrix:\n");
    for (i = 0;i<r1;i++){
        for (j = 0;j<c1;j++){
            scanf("%d",&arr1[i][j]);
        }   
    }
    
    printf("Enter the row and column of Second Matrix:\n");
    scanf("%d %d",&r2,&c2);
    
    if (c1==r2){
        printf("Enter the elements of Second Matrix\n");
        for (i = 0;i<r2;i++){
            for (j = 0;j<c2;j++){
                scanf("%d",&arr2[i][j]);
            }   
        }
        
        for (int i =0;i<r1;i++) {
            for (int j =0;j<c2;j++) {
                for (int k =0;k<c2;k++) {
                    arr3[i][j]+=(arr1[i][k]*arr2[k][j]);
                }
            }   
        }
        printf("The answer is: \n");
        for (int i =0;i<r1;i++) {
            for (int j =0;j<c2;j++) {
                printf("%d ",arr3[i][j]);
            }   
        
            printf("\n");
        }
    }
    else{
        printf("We cannot multiply these matrix");
        
        }
    
    return 0;
}
