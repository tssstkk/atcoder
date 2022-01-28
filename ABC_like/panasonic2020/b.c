#include <stdio.h>

int main(void)
{
  long h, w;
  scanf("%ld %ld", &h, &w);
  
  if (h == 1 || w == 1)
  {
    printf("1");
    return 0;
  }
  
  long ans;
  ans = h * w / 2;
  if (h % 2 == 1 && w % 2 == 1)
  {
    ans++;
  }
  printf("%ld", ans);
  return 0;
}

