//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include <stdio.h>
int main()
{
 int n;
 printf("Enter an integer: ");
 scanf("%d", &n);
 if (n >= 0)
 {
  if (n == 0)
  {
    printf("%d is zero.\n", n);
  } 
   else
   {
     printf("%d is positive.\n", n);
   }
  } 
  else
  {
    printf("%d is negative.\n", n);
  }
return 0;
}
