//Write a program to calculate the area and circumference of a circle given its radius

#include <stdio.h>
#define PI 3.14159
int main()
{
  int r;
  float ar, cir;
  printf("Enter the radius: ");
  scanf("%d", &r);
  ar = PI*r*r;
  cir = 2*PI*r;
  printf("Area = %.2f\n", ar);
  printf("Circumference = %.2f\n", cir);
  return 0;
}
