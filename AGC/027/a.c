#include <stdio.h>

int main(void)
{
  int n;
  long x;
  scanf("%d %ld", &n, &x);
  int i = 0;
  long a[n];
  long sum = 0;
  while (i < n)
  {
    scanf("%ld", &a[i]);
    sum += a[i];
    i++;
  }
  if (sum == x)
  {
    printf("%d", i);
    return 0;
  }
  
  int flg = 1;
  int tmp;
  while (flg == 1)
  {
    i = 0;
    flg = 0;
    while (i + 1 < n)
    {
      if (a[i] > a[i + 1])
      {
        tmp = a[i];
        a[i] = a[i + 1];
        a[i + 1] = tmp;
        flg = 1;
      }
      i++;
    }
  }
  
  i = 0;
  sum = 0;
  while (sum <= x && i < n)
  {
    sum += a[i];
    i++;
  }
  printf("%d", i - 1);
  return 0;
}

