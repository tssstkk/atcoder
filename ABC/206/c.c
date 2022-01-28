#include <stdlib.h>

int compare_int(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}

int main()
{
  long long n;
  scanf("%lld", &n);
  int a[n];
  int i;
  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  qsort(a, n, sizeof(int), compare_int);
  
  long long sum = n * (n - 1) / 2;
  long long cnt = 1;
  for (i = 1; i < n; i++)
  {
    if (a[i] == a[i - 1])
    {
      cnt++;
    }
    else
    {
      if (cnt >= 2)
      {
        sum -= cnt * (cnt - 1) / 2;
      }
      cnt = 1;
    }
  }
  
  if (cnt >= 2)
  {
    sum -= cnt * (cnt - 1) / 2;
  }
  
  printf("%lld\n", sum);
}
