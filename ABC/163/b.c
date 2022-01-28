#include <stdio.h>

int main(void)
{
  int n, m;
  scanf("%d %d", &n, &m);
  int a[m];
  int sum = 0;
  for (int i = 0; i < m; i++)
  {
    scanf("%d", &a[i]);
    sum += a[i];
  }
  int ans;
  if (n >= sum)
  {
    ans = n - sum;
  }
  else if (n < sum)
  {
    ans = -1;
  }
  printf("%d", ans);
  return 0;
  
}

