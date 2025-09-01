//Write a program to calculate an electricity bill based on units consumed.

#include <stdio.h>
int main()
{
  int units;
  int bill = 0;
  printf("Enter units consumed: ");
  scanf("%d", &units);
  if (units <= 100)
  {
    bill = units * 5;
  }
  else if (units <= 200)
  {
    bill = (100 * 5) + ((units - 100) * 7);
  }
  else 
  {
    bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
  }
  printf("Bill: ₹%d", bill);
  return 0;
}
