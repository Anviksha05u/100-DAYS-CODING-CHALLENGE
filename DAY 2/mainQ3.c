//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
int main()
{
  int len, br, ar, pm;
  printf("Enter the length: ");
  scanf("%d", &len);
  printf("Enter the breadth: ");
  scanf("%d", &br);
  ar = len*br;
  pm = 2*(len+br);
  printf("The area of the rectangle of length %d and breadth %d is %d\n", len, br, ar);
  printf("The perimeter of the rectangle of length %d and breadth %d is %d\n", len, br, pm);
  return 0;
}
