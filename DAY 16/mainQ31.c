//Write a program to take a number as input and print its equivalent binary representation.

#include<stdio.h>
int main()
{
  int n, bit = 1;
  printf("Enter a number: ");
  scanf("%d", &n);
  while (bit <= n) 
  {
    bit = bit * 2;
  }
  bit = bit / 2;
  printf("Binary: ");
  while (bit > 0)
  {
    if (n >= bit) 
    {
      printf("1");
      n = n - bit;
    } 
    else
    {
      printf("0");
    }
    bit = bit / 2;
  }
  printf("\n");
  return 0;
}
