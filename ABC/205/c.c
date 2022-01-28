#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  if (a > 0 && b > 0)
  {
    if (a > b)
      printf(">\n");
    else if (a < b)
      printf("<\n");
    else
      printf("=\n");
  }
  else if (a < 0 && b < 0)
  {
    if (c % 2 == 0)
    {
      if (a > b)
        printf("<\n");
      else if (a < b)
        printf(">\n");
      else
        printf("=\n");
    }
    else
    {
      if (a > b)
        printf(">\n");
      else if (a < b)
        printf("<\n");
      else
        printf("=\n");
    }
  }
  else
  {
    int a1 = abs(a);
    int b1 = abs(b);
    if (c % 2 == 0)
    {
      if (a1 > b1)
        printf(">\n");
      else if (a1 < b1)
        printf("<\n");
      else
        printf("=\n");
    }
    else
    {
      if (a > b)
        printf(">\n");
      else if (a < b)
        printf("<\n");
      else
        printf("=\n");
    }
  }
}
