#include <stdio.h>

int main(void)
{
  int n;
  scanf("%d", &n);
  
  long sum = 0;
  int i = 1;
  while (i <= n)
  {
    if (!(i % 3 == 0 || i % 5 == 0))
    {
      sum += i;
    }
    i++;
  }
  printf("%ld", sum);
  return 0;
}
