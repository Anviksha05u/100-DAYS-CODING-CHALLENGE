//Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>
int main()
{
  int totalSeconds, hours, minutes, seconds;
  scanf("%d", &totalSeconds); 
  hours = totalSeconds / 3600;
  minutes = (totalSeconds % 3600) / 60;
  seconds = totalSeconds % 60;
  printf("Time = %d:%d:%d\n", hours, minutes, seconds);
  return 0;
}
