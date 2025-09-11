//Write a program to check if a number is a strong number.

#include <stdio.h>
int main() 
{
  int num, ori, d, sum = 0;
  printf("Enter a number: ");
  scanf("%d", &num);
  ori = num;
  while (num > 0) 
  {
    d = num % 10;
    int fact = 1;
    for (int i = 1; i <= d; i++) 
    {
      fact *= i;
    }
    sum += fact;     
    num /= 10;    
  }
  if (sum == ori)
  printf("Strong Number");
  else
  printf("NOT a Strong Number");
  return 0;
}
