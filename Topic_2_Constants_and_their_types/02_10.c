/* values and sizes of enumeration constants */
#include <stdio.h>

int
main (void)
{
  enum DAY { SUNDAY, MONDAY, TUEDAY, WEDNESDAY,
             THURSDAY, FRIDAY, SATURDAY };
  printf("SUNDAY = %d\n", SUNDAY);
  printf("MONDAY = %d\n", MONDAY);
  printf("FRIDAY = %d\n", FRIDAY);
  printf("sizeof(enum DAY) = %lu\n", sizeof(enum DAY));
  printf("sizeof(MONDAY) = %lu\n", sizeof(MONDAY));
  printf("sizeof(FRIDAY) = %lu\n", sizeof(FRIDAY));
  return 0;
}
