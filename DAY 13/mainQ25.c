//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>
int main()
{
  int num1, num2;
    char operator;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter an operator: ");
    scanf(" %c", &operator);  
    printf("Enter second number: ");
    scanf("%d", &num2);
    switch (operator)
    {
      case '+':
      printf("Result: %d", num1 + num2);
      break;
      case '-':
      printf("Result: %d", num1 - num2);
      break;
      case '*':
      printf("Result: %d", num1 * num2);
      break;
      case '/':
      printf("Result: %d", num1 / num2);
      break;
      case '%':
      printf("Result: %d", num1 % num2);
      break;
      default :
      printf("Invalid Input!");
      break;
    }
  return 0;
}
