//Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>
int main()
{
  float principal, rate, time;
  float simpleInterest, compoundInterest;
  scanf("%f %f %f", &principal, &rate, &time); 
  simpleInterest = (principal * rate * time) / 100;
  compoundInterest = principal * pow((1 + rate / 100), time) - principal;
  printf("Simple Interest= %.2f\n", simpleInterest);
  printf("Compound Interest= %.2f\n", compoundInterest);
  return 0;
}
