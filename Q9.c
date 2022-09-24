//9. Write a program in C to count the digits of a given number using recursion.
#include<stdio.h>
int main()
{

   int num,ctr;
   printf("Enter the Number for how many digits in it  = ");
   scanf("%d", &num);
  ctr= digitsgiven(num);
   printf(" The number of digits in the number is :  %d \n",ctr);

    return 0;
}
int digitsgiven(int n)
{
  if(n/10==0)
  return 1;
 return 1+digitsgiven(n/10);


}


