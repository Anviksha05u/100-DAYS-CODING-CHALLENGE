//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>
int main()
{
  int a,b,c;
  printf("Enter three sides of the triangle: ");
  scanf("%d %d %d", &a, &b, &c);
  if (a + b > c && b + c > a && c + a > b) 
  {
   if (a == b && b == c) 
   {
    printf("Equilateral triangle");
   } 
   else if (a == b || b == c || c == a) 
   {
    printf("Isosceles triangle");
   } 
   else
   {
    printf("Scalene triangle");
   }
  } 
  else 
  {
   printf("Not a triangle");
  }
 return 0;
}
