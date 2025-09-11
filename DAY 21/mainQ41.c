//Write a program to swap the first and last digit of a number.

#include <stdio.h>
int main() 
{
  int n, first, last, middle, c = 0, temp, place = 1, swap;
  printf("Enter a number: ");
  scanf("%d", &n);
  temp = n;
  last = temp % 10;
  while (temp >= 10) 
  {
    temp /= 10;
    c++;
  }
  first = temp;
  if (c == 0) 
  {
    printf("Swapped Number: %d\n", n);
    return 0;
  }
  for (int i = 0; i < c; i++) 
  {
    place *= 10;
  }
  middle = n % place;
  middle /= 10;
  swap = last * place + middle * 10 + first;
  printf("Swapped Number: %d\n", swap);
  return 0;
}
