/* errors in writing integer constants */
#include <stdio.h>

int
main (void)
{
  printf("The value of 1234 is %i(10)\n", 1234);
  printf("The value of 02322 is %i(10)\n", 2322);
  printf("The value of 0x4d2 is %i(10)\n", 4d2);
  return 0;
}
