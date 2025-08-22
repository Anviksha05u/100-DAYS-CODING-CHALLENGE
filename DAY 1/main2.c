//Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>
int main()
{
 int num1, num2, sum, diff, pr, quo;
 printf ("Enter the first number: ");
 scanf ("%d", &num1);
 printf ("Enter the second number: ");
 scanf ("%d", &num2);
 sum = num1+num2;
 diff = num1-num2;
 pr = num1*num2;
 quo = num1/num2;
 printf("The sum of %d and %d is %d\n", num1, num2, sum);
 printf("The difference of %d and %d is %d\n", num1, num2, diff);
 printf("The product of %d and %d is %d\n", num1, num2, pr);
 printf("The quotient of %d and %d is %d\n", num1, num2, quo);
 return 0;
}

