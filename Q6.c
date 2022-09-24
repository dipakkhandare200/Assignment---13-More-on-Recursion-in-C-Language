//6. Write a recursive function to calculate factorial of a given number
#include <stdio.h>
int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    int num ;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Factorial of %d is %d", num, factorial(num));
    return 0;
}
