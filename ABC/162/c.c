#include <stdio.h>

int gcd(int a, int b)
{
  int x, y;
  x = a;
  y = b;
  int tmp;
  if (x < y)
  {
    tmp = x;
    x = y;
    y = tmp;
  }
  
  int r;
  r = x % y;
  while (r != 0)
  {
    x = y;
    y = r;
    r = x % y;
  }
  return y;
}

int main(void)
{
  int k;
  scanf("%d", &k);
  
  int sum = 0;
  int a = 1, b, c;
  while (a <= k)
  {
    b = 1;
    while (b <= k)
    {
      c = 1;
      while (c <= k)
      {
        sum += gcd(gcd(a, b), c);
        c++;
      }
      b++;
    }
    a++;
  }
  printf("%d", sum);
  return 0;
}

