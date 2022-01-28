#include <stdio.h>

int main(void)
{
  int x, y, z;
  scanf("%d %d %d", &x, &y, &z);
  
  int tmp = 0;
  tmp = x;
  x = y;
  y = tmp;
  tmp = z;
  z = x;
  x = tmp;
  printf("%d %d %d", x, y, z);
  return 0;
}
