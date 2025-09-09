//Write a program to find the product of odd digits of a number.

#include <stdio.h>
int main() 
{
  int n, d, product = 1;
  int isOdd = 0;
  printf("Enter a number: ");
  scanf("%d", &n);
  while (n != 0) 
  {
    d = n % 10;
    if (d % 2 != 0) 
    {
      product *= d;
      isOdd = 1;
    }
    n = n / 10;
  }
  printf("Product: %d", product);
  return 0;
}
  
