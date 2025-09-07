//Write a program to check if a number is an Armstrong number.

#include <stdio.h>
int main() 
{
  int n, temp, d, c = 0, sum = 0;
  printf("Enter a number: ");
  scanf("%d", &n);
  temp = n;
  while (temp != 0)
  {
    c++;
    temp = temp / 10;
  }
  temp = n;
  while (temp != 0)
  {
    d = temp % 10;
    int power = 1;
    for (int i = 1; i <= c; i++)
    {
      power *= d;
    }
    sum += power;
    temp = temp / 10;
   }
   if (sum == n) 
   {
     printf("Armstrong number");
   }
   else 
   {
     printf("Not an Armstrong number");
   }
  return 0;
}
