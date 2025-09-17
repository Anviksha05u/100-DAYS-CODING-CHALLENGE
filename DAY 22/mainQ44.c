//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>
int main()
{
  int n,i;
  float sum=0.0;
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  if (n>=1)
  {
    sum = 1.0;
  }
  for (i=2; i<=n; i++)
  {
    sum=sum+(2.0*i-1) / (2.0*i);
  }
  printf("Sum of the series: %.1f\n", sum);
  return 0;
}
