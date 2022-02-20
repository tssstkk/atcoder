#include <stdio.h>
#include <string.h>

int main(void)
{
  char s[101];
  scanf("%s", &s);
  
  int len = strlen(s);
  int i = 1;
  while (i <= len)
  {
    printf("x");
    i++;
  }
  return 0;
}
