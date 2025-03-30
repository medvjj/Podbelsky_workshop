/* invalid call to puts() with invalid prototype placing */
int main(void)
{
  puts("The value of PI = ", "3.14159");
  int puts(const char *_s);
  return 0;
}
