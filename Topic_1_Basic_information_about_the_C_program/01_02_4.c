/* invalid call to puts() when header file is present */
#include <stdio.h>
int main(void)
{
  puts("The value of PI = ", "3.14159");
  return 0;
}
