//Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>
int main()
{
  int n, i;
  int product = 1; 
  int even = 0;  
  printf("Enter the value of n: ");
  scanf("%d", &n);
  for (i = 2; i <= n; i += 2) 
  {
    product *= i;
    even = 1;
  }
  if (even)
  printf("Product %d", product);
  else
  printf("No even numbers %d", n);
  return 0;
}
