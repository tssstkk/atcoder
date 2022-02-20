#include <stdio.h>

int main(void)
{
  int a, b;
  scanf("%d %d", &a, &b);
  if (a < 1 || a > 100 || b < 1 || b > 100)
  {
    printf("-1");
    return 0;
  }
  
  int i, ina, inb;
  i = 1;
  ina = 0;
  inb = 0;
  while (i < 1010)
  {
    ina = i * 0.08;
    inb = i * 0.1;
    if (ina == a && inb == b)
    {
      printf("%d", i);
      return 0;
    }
    i++;
  }
  
  printf("-1");
  return 0;
}

