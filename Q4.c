//4. Write a recursive function to calculate sum of squares of first n natural numbers
 #include <stdio.h>
int addsquareNumbers(int n);
int main()
 {

  int num;
  printf("Enter a positive integer: ");
  scanf("%d", &num);
  printf("Sum = %d", addsquareNumbers(num));
  return 0;
}
int addsquareNumbers(int n)
{
  if (n <= 0)
    return n;
  else
    return n*n + addsquareNumbers(n - 1);
}
