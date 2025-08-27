// Write a program to input three numbers and find the largest among them using if–else.

#include <stdio.h>
int main() 
{
 int a, b, c;
 printf("Enter three numbers: ");
 scanf("%d %d %d", &a, &b, &c); 
 if (a >= b)
 {
  if (a >= c)
  {
    printf("Largest = %d\n", a);
  } 
  else 
  {
    printf("Largest = %d\n", c);
  }
 } 
 else 
 {
   if (b >= c) 
   {
     printf("Largest = %d\n", b);
   }
   else 
   {
     printf("Largest = %d\n", c);
   }
 }
 return 0;
}
