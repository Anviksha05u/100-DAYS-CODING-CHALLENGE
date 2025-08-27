//Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include <stdio.h>
int main()
{
  int y;
  printf("Enter a year: ");
  scanf("%d", &y);
  if (y%4==0 && y%400==0)
  {
    printf("It is a leap year");
  }
  else
  {
    printf("It is not a leap year");
  }
  if (y%100==0)
  {
    printf("It is not a leap year");
  }
return 0;
}
