/* precision of long double constants */
#include <stdio.h>

int
main (void)
{
  printf("The value of 123456789.987654321 equals %24.12Lf\n", 123456789.987654321L);
  printf("The value of 123456789.987654321 equals %24.12Le\n", 123456789.987654321L);
  return 0;
}
