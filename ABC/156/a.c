#include <stdio.h>

int main(void)
{
  int n, r;
  scanf("%d %d", &n, &r);
  
  int ans = 0;
  if (n >= 10)
  {
    ans = r;
  }
  else if (n < 10)
  {
    ans = r + (100 * (10 - n));
  }
  printf("%d", ans);
  return 0;
}

