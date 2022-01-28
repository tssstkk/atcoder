#include <stdio.h>
int main(void)
{
  int aa, bb, m;
  scanf("%d %d %d", &aa, &bb, &m);
  int a[aa], b[bb], i;
  int min_a = 100000, min_b = 100000;
  for (i = 0; i < aa; i++)
  {
    scanf("%d", &a[i]);
    if (min_a > a[i])
      min_a = a[i];
  }
  for (i = 0; i < bb; i++)
  {
    scanf("%d", &b[i]);
    if (min_b > b[i])
      min_b = b[i];
  }
  int x[m], y[m], c[m];
  for (i = 0; i < m; i++)
    scanf("%d %d %d", &x[i], &y[i], &c[i]);
  
  int ans = min_a + min_b;
  int sum;
  for (i = 0; i < m; i++)
  {
    sum = a[x[i] - 1] + b[y[i] - 1] - c[i];
    if (ans > sum)
    {
      ans = sum;
    }
  }
  printf("%d", ans);
  return 0;
}

