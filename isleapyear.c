#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int year = atoi(argv[1]);
  if ((year % 4 == 0) && (year % 100 != 0))
  {
    printf("%d", year);
    printf(" was a leap year \n");
  }
  else
  {
    printf("%d", year);
    printf(" was not a leap year \n");
  }
  // the string "{year} was a leap year'' if true and "{year} was not a leap year'' if false.

  return 0;
}