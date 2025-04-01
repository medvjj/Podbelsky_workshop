/* precision of float constants */
#include <stdio.h>

int
main (void)
{
  printf("The value of 123456789.987654321f equals %24.12f\n", 123456789.987654321f);
  printf("The value of 123456789.987654321f equals %24.12e\n", 123456789.987654321f);
  return 0;
}
