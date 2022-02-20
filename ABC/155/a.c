#include <stdio.h>

int main(void)
{
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  
  if ((a == b && b != c) || (b == c && c != a) || (c == a && a != b))
  {
    printf("Yes");
  }
  else
  {
    printf("No");
  }
  return 0;
}
