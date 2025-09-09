//Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>
int main() 
{
  int bin, d, c = 0, place = 1;
  printf("Enter a binary number: ");
  scanf("%d", &bin);
  while (bin != 0) 
  {
    d = bin % 10;
    if (d == 0)
    c += 1 * place;
    else
    c += 0 * place;
    place *= 10;
    bin /= 10;
  }
  printf("1's complement : %d", c);
  return 0;
}
