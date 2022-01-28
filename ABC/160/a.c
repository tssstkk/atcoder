#include <stdio.h>

int main(void)
{
  char s[7];
  scanf("%s", &s);
  if (s[2] == s[3] && s[4] == s[5])
  {
    printf("Yes");
    return 0;
  }
  printf("No");
  return 0;
}
