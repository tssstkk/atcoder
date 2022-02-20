#include <stdio.h>
int main(void)
{
  int n;
  scanf("%d", &n);
  int i, x[n];
  i = 0;
  while (i < n)
  {
    scanf("%d", &x[i]);
    i++;
  }
  
  int ans, sigma, k;
  ans = 2147483647;
  i = 0;
  while (i <= 100)
  {
    k = 0;
    sigma = 0;
    while (k < n)
    {
      sigma += (x[k] - i) * (x[k] - i);
      k++;
    }
    if (ans >= sigma)
    {
      ans = sigma;
    }
    i++;
  }
  printf("%d", ans);
  return 0;
}
