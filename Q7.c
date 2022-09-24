//7. Write a recursive function to calculate HCF of two numbers
#include <stdio.h>
int hcf(int m,int n)
{
    if (n == 0)
        return m;
    return hcf(n,m%n);
}

int main()
{
    int num1,num2 ;
    printf("Enter a two positive integer: ");
    scanf("%d%d", &num1,&num2);
    printf("HCF of %d & %d is %d", num1,num2,hcf(num1,num2));
    return 0;
}

