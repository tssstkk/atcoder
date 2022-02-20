#include <stdio.h>

int main(void)
{
  char s[11], t[11];
  scanf("%s %s", &s, &t);
  int a, b;
  scanf("%d %d", &a, &b);
  char u[11];
  scanf("%s", &u);
  
  if (strcmp(s, u) == 0)
  {
    printf("%d %d", a-1, b);
  }
  else
  {
    printf("%d %d", a, b-1);
  }
  return 0;
}
