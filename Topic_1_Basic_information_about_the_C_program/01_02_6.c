/* invalid call to puts() due to incorrect inclusion of stdio.h header file */
int main(void)
{
  puts("The value of PI = ", "3.14159");
  return 0;
}
#include <stdio.h>
