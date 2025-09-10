//Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>
int main() 
{
  long long bin, temp, rev=0;
  int d, c = 0;
  printf("Enter a binary number: ");
  scanf("%lld", &bin);
  temp = bin;
  while (temp > 0) 
  {
    c++;
    temp /= 10;
  }
  temp = bin;
  while (temp > 0) 
  {
    d = temp % 10;
    rev = rev * 10 + d;
    temp /= 10;
  }
  printf("1's Complement: ");
  for (int i = 0; i < c; i++) 
  {
    d = rev % 10;
    rev /= 10;
    printf("%d", d == 0 ? 1 : 0);
  }
  printf("\n");
  return 0;
}
