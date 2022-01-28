#include <stdio.h>
#include <string.h>

int main(void)
{
  int n;
  scanf("%d", &n);
  int i, k, b[n];
  memset(b, 0, sizeof(b));
  for (i = 2; i <= n; i++)
  {
    scanf("%d", &k);
    b[k - 1]++;
  }
  
  for (i = 0; i < n; i++)
    printf("%d\n", b[i]);
  
  return 0;
}

