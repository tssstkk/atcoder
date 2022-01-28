#include <stdlib.h>

int compare_int(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}


int main()
{
  int n;
  scanf("%d", &n);
  long l[n];
  int i;
  for (i = 0; i < n; i++)
    scanf("%ld", &l[i]);
  qsort(l, n, sizeof(long), compare_int);
  int sum = 0, ans = 0, j, k;
  for (i = 0; i < n - 2; i++)
  {
    if (i >= 1 && l[i] == l[i - 1])
      ans += sum;
    else
    {
      if (i >= 1)
        sum = 0;
      for (j = i + 1; j < n - 1; j++)
      {
        if (l[j] == l[i])
          continue;
        for (k = j + 1; k < n; k++)
        {
          if (l[k] == l[j])
            continue;
          if (l[i] + l[j] <= l[k] || l[i] + l[k] <= l[j] || l[j] + l[k] <= l[i])
            break;
          else
            sum++;
        }
      }
      ans += sum;
    }
  }
  printf("%d", ans);
}
