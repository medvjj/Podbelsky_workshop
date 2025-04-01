/* salaries of the Unified Tariff Grid */
#include <stdio.h>

int
main (void)
{
  enum ETC { RANK01=200, RANK02=210, RANK03=233,
             RANK04=252, RANK05=285, RANK06=322,
             RANK07=364, RANK08=412 };
  printf("RANK03 = %d\n", RANK03);
  printf("RANK07 = %d\n", RANK07);
  printf("sizeof(RANK08) = %lu\n", sizeof(RANK08));
  printf("sizeof(enum ETC) = %lu\n", sizeof(enum ETC));
  return 0;
}
