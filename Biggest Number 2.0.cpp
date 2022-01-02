#include<stdio.h>

int main()
{
    int n,i;
    float c,big;

    printf("Enter the number of elements you wish to find the greatest element of: ");
    scanf("%d", &n);
    printf("Enter %d numbers\n", n);

    printf("Element 1 : ");
    scanf("%f",&big);

    for(i = 2; i <= n; i++)
    {
        printf("Element %d  : ", i);
        scanf("%f", &c);
        if(big < c)  
            big = c;
    }

    printf("The largest of the %d numbers is  %f ", n, big);
    return 0;
}