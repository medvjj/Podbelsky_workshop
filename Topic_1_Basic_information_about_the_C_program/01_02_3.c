/* invalid call to puts() with invalid prototype placing №2 */
int main(void)
{
  puts("The value of PI = ", "3.14159");
  return 0;
}
int puts(const char *_s);
