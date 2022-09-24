//5. Write a recursive function to calculate sum of digits of a given number
#include <stdio.h>
int addgivenNumbers(int n);
int main()
 {

  int num;
  printf("Enter a positive integer: ");
  scanf("%d", &num);
  printf("Sum = %d", addgivenNumbers(num));
  return 0;
}
int addgivenNumbers(int n)
{
  if (n == 0)
    return n;
  else
    return n%10 + addgivenNumbers(n/10);
}

