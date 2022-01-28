#include <stdlib.h>
int compare_int(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}

int main()
{
  int n;
  scanf("%d", &n);
  int a[n];
  int i, j;
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  qsort(a, n, sizeof(int), compare_int);
  for (i = a[0]; i > 0; i--)
  {
    if (a[0] % i != 0)
      continue;
    for (j = 1; j < n; j++)
    {
      if (a[j] % i != 0)
        break;
    }
    if (j == n)
    {
      printf("%d", i);
      return 0;
    }
  }
}
