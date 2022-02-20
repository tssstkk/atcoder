#include <stdio.h>

int main(void)
{
  long long n, a, b;
  scanf("%lld %lld %lld", &n, &a, &b);
  if (a < 0 || b < 0)
  {  
    return 0;
  }
  
  long long div, mod, ans;
  div = n / (a + b);
  mod = n % (a + b);
  
  if (mod >= a)
  {
    ans = div * a + a;
  }
  else if (mod < a)
  {
    ans = div * a + mod;
  }
  printf("%lld", ans);
  return 0;
}
