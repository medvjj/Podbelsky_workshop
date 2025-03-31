/* printf() replaces puts() */
#include <stdio.h>

int
main (void)
{
  printf("From formatted string: Hello, World\n");
  printf("%s\n", "From argument of printf(): Hello, World");
  return 0;
}
