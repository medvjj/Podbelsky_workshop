/*  sizes of real constants */
#include <stdio.h>

int
main (void)
{
  printf("sizeof(2.71828) = %lu\n", sizeof(2.71828));
  printf("sizeof(2.71828F) = %lu\n", sizeof(2.71828F));
  printf("sizeof(2.71828L) = %lu\n", sizeof(2.71828L));
  return 0;
}
