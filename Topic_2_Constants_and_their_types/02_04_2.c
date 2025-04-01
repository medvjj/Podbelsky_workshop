/*  sizes of real constants №3 */
#include <stdio.h>

int
main (void)
{
  printf("sizeof(0.f) = %lu\n", sizeof(0.f));
  printf("sizeof(123456789.f) = %lu\n", sizeof(123456789.f));
  printf("sizeof(123456789.987654321f) = %lu\n", sizeof(123456789.987654321f));
  printf("sizeof(0.987654321f) = %lu\n", sizeof(0.987654321f));
  return 0;
}
