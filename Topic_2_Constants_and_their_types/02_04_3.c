/*  sizes of real constants №4 */
#include <stdio.h>

int
main (void)
{
  printf("sizeof(0.l) = %lu\n", sizeof(0.l));
  printf("sizeof(123456789.l) = %lu\n", sizeof(123456789.l));
  printf("sizeof(123456789.987654321l) = %lu\n", sizeof(123456789.987654321l));
  printf("sizeof(0.987654321l) = %lu\n", sizeof(0.987654321l));
  return 0;
}
