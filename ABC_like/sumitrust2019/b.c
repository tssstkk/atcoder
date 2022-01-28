#include <stdio.h>

int main(void)
{
  int n;
  scanf("%d", &n);
  int age, sute;
  age = (double)n / 1.08 + 0.99999;
  sute = n / 1.08;
  
  int tmp;
  tmp = sute * 1.08;
  if (tmp == n)
  {
    printf("%d", sute);
    return 0;
  }
  tmp = age * 1.08;
  if (tmp == n)
  {
    printf("%d", age);
    return 0;
  }
  printf(":(");
  return 0;
}

