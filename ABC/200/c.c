#include <string.h>
#include <stdlib.h>
int compare_int(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}

int main()
{
  int n;
  scanf("%d", &n);
  int i, j;
  long ans = 0;
  int a[n];
  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
    a[i] %= 200;
  }
  int b[201];
  for (i = 0; i < 201; i++)
    b[i] = 0;
  for (i = 0; i < n; i++)
  {
    b[a[i]]++;
  }
  for (i = 0; i < 201; i++)
  {
    if (b[i] >= 2)
    {
      ans += (long)b[i] * (b[i] - 1) / 2;
    }
  }
  printf("%ld", ans);
}
