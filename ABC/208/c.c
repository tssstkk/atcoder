#include <stdlib.h>

int compare_int(const void *a, const void *b)
{
  return *(int*)a - *(int*)b;
}


int main()
{
  long long n, k;
  scanf("%lld %lld", &n, &k);
  int a[n], b[n];
  long long i;
  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
    b[i] = a[i];
  }
  qsort(b, n, sizeof(int), compare_int);
  
  long long amari = k % n;
  long long shou = k / n;
  
  if (amari == 0)
  {
    for (i = 0; i < n; i++)
    {
      printf("%lld\n", shou);
    }
    return 0;
  }
  
  int num = b[amari - 1];
  for (i = 0; i < n; i++)
  {
    if (a[i] <= num)
    {
      printf("%lld\n", shou + 1);
    }
    else
    {
      printf("%lld\n", shou);
    }
  }
}
