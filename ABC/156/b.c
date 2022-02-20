#include <stdio.h>

int main(void)
{
  long long n;
  int k;
  scanf("%lld %d", &n, &k);
  
  int i, digit;
  i = n;
  digit = 1;
  while (i / k != 0)
  {
    i = i / k;
    digit++;
  }
  printf("%d", digit);
  return 0;
}
