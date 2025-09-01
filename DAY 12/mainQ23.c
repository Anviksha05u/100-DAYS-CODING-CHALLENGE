//Write a program to calculate a library fine based on late days.

#include <stdio.h>
int main() 
{
    int days, fine;
    printf("Enter number of late days: ");
    scanf("%d", &days);
    if (days >= 1 && days <= 7) 
    {
      fine = days * 2;
      printf("Fine Rs %d\n", fine);
    }
    else if (days >= 8 && days <= 14)
    {
      fine = days * 4;
      printf("Fine Rs %d", fine);
    }
    else if (days >= 15 && days <= 30)
    {
      fine = days * 6;
      printf("Fine Rs %d", fine);
    } 
    else if (days > 30)
    {
      printf("Membership Cancelled");
    } 
    else
    {
      printf("No fine");
    }
    return 0;
}
