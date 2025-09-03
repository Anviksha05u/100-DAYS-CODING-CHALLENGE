//Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>
int main()
{
  int n, i;
  int product = 1;  
  printf("Enter the value of n: ");
  scanf("%d", &n);
  for (i = 2; i <= n; i += 2) 
  {
    product *= i;
    if (i == 2)
    printf("(%d ", i);
    else
    printf("* %d)", i);
  }
  printf(" %d", product);
  return 0;
}
