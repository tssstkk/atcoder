#include <stdio.h>

int main(void)
{
  int n, m;
  scanf("%d %d", &n, &m);
  int i = 0;
  int a[n];
  int vote = 0;
  while (i < n)
  {
    scanf("%d", &a[i]);
    vote += a[i];
    i++;
  }
  
  i = 0;
  int cnt = 0;
  double tmp = vote;
  tmp = tmp / (4 * m);
  while (i < n)
  {
    if (a[i] >= tmp)
    {
      cnt++;
    }
    i++;
  }
  if (cnt >= m)
  {
    printf("Yes");
    return 0;
  }
  printf("No");
  return 0;
}

