/* sizes of memory areas of integer constants */
#include <stdio.h>

int
main (void)
{
  printf("sizeof(1)  = %lu\n", sizeof(1));
  printf("sizeof(1L) = %ld\n", sizeof(1L));
  printf("sizeof(1U) = %ld\n", sizeof(1U));
  printf("sizeof(short) = %lu\n", sizeof(short));
  printf("sizeof(int) = %lu\n", sizeof(int));
  printf("sizeof(long) = %lu\n", sizeof(long));
  return 0;
}
