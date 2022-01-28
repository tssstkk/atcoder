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
  int i;
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  qsort(a, n, sizeof(int), compare_int);
  for (i = 0; i < n; i++)
  {
    if (i + 1 != a[i])
    {
      printf("No\n");
      return 0;
    }
  }
  printf("Yes\n");
}
