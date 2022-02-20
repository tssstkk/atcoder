#include <stdlib.h>

int compare_ll(const void *a, const void *b)
{
  return *(long long*)a - *(long long*)b;
}

int bin_search(const long long* a, int n, long long key)
{
  int pl = 0;
  int pr = n - 1;
  int pc;
  
  if (key < a[0])
    return 0;
  else if (a[n - 1] < key)
    return n;
  
  while (pl <= pr)
  {
    pc = (pl + pr) / 2;
    if (pc == pl || pc == pr)
      break;
    if (key > a[pc])
      pl = pc;
    else
      pr = pc;
  }
  return pr;
}

int main()
{
  int i;
  
  int n, q;
  scanf("%d %d", &n, &q);
  long long a[n];
  for (i = 0; i < n; i++)
    scanf("%lld", &a[i]);
  long long x[q];
  for (i = 0; i < q; i++)
    scanf("%lld", &x[i]);
  
  qsort(a, n, sizeof(long long), compare_ll);
  
  int cnt = 0;
  for (i = 0; i < q; i++)
  {
    cnt = bin_search(a, n, x[i]);
    printf("%d\n", n - cnt);
  }
}