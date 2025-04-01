/* sizes of real constants №2 */
#include <stdio.h>

int
main (void)
{
  printf("sizeof(0.) = %lu\n", sizeof(0.));
  printf("sizeof(123456789.) = %lu\n", sizeof(123456789.));
  printf("sizeof(123456789.987654321) = %lu\n", sizeof(123456789.987654321));
  printf("sizeof(0.987654321) = %lu\n", sizeof(0.987654321));
  return 0;
}
