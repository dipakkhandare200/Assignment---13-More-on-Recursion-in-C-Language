//3. Write a recursive function to calculate sum of first N even natural numbers
#include <stdio.h>
int addevenNumbers(int n);
int main()
 {

  int num;
  printf("Enter a positive integer: ");
  scanf("%d", &num);
  printf("Sum = %d", addevenNumbers(num));
  return 0;
}
int addevenNumbers(int n)
{
  if (n <= 0)
    return n;
  else
    return 2*n + addevenNumbers(n - 1);
}
