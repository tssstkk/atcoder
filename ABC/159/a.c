#include <stdio.h>

int main(void)
{
  int n, m;
  scanf("%d %d", &n, &m);
  
  int ans;
  ans = (n * (n - 1) / 2) + (m * (m - 1) / 2);
  printf("%d", ans);
  return 0;
}
