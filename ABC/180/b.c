#include <stdlib.h>
int main()
{
  long n;
  scanf("%ld", &n);
  long x[n], t[n];
  long i;
  long long m = 0, c = 0, y = 0;
  for (i = 0; i < n; i++)
  {
    scanf("%ld", &x[i]);
    t[i] = abs(x[i]);
    m += t[i];
    y += t[i] * t[i];
    if (c < t[i])
      c = t[i];
  }
  double a;
  a = sqrt(y);
  printf("%lld\n", m);
  printf("%.10lf\n" , a);
  printf("%lld\n", c);
}
