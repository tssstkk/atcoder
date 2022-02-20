#include <stdio.h>
#include <stdlib.h>

int compare_int(const void *a, const void *b)
{
  return *(int*)a - *(int*)b;
}

int main(void)
{
  int n, k;
  scanf("%d %d", &n, &k);
  int i, h[n];
  i = 0;
  while (i < n)
  {
    scanf("%d", &h[i]);
    i++;
  }
  
  qsort(h, n, sizeof(int), compare_int);
  
  if (k >= n)
  {
    printf("0");
    return 0;
  }
  
  long sum;
  sum = 0;
  i = 0;
  while (i < n - k)
  {
    sum += h[i];
    i++;
  }
  printf("%ld", sum);
  return 0;
}

