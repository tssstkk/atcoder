#include <stdio.h>

int main(void)
{
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  
  int ta, tb, tc;
  int cnt = 0;
  while (a % 2 == 0 && b % 2 == 0 && c % 2 == 0)
  {
    if (a == b && b == c)
    {
      printf("-1");
      return 0;
    }
    ta = a;
    tb = b;
    tc = c;
    a = tb / 2 + tc / 2;
    b = tc / 2 + ta / 2;
    c = ta / 2 + tb / 2;
    cnt++;
  }
  printf("%d", cnt);
  return 0;
}
