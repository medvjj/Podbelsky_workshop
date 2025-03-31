/* erroneous use of string specification */
#include <stdio.h>

int
main (void)
{
  printf("The value of PI = %s\n", 3.14159);
  return 0;
}
