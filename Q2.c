//2. Write a recursive function to calculate sum of first N odd natural numbers
#include <stdio.h>
int addoddNumbers(int n);
int main()
 {

  int num;
  printf("Enter a positive integer: ");
  scanf("%d", &num);
  printf("Sum = %d", addoddNumbers(num));
  return 0;
}
int addoddNumbers(int n)
{
  if (n <= 0)
    return n;
  else
    return 2*n-1 + addoddNumbers(n - 1);
}

