#include <math.h>
int main()
{
  int n;
  scanf("%d", &n);
  long a[n];
  int i;
  unsigned long long ans = 0;
  long tmp = pow(10, 9) + 7;
  long long count = 0;
  for (i = 0; i < n; i++)
  {
    scanf("%ld", &a[i]);
    count += a[i];
    count %= tmp;
  }
  for (i = n - 1; i > 0; i--)
  {
    count -= a[i];
    count += tmp;
    count %= tmp;
    ans += a[i] * count;
    ans %= tmp;
  }
  printf("%llu", ans);
}
