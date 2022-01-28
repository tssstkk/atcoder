#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
int main(void)
{
  int r;
  scanf("%d", &r);
  
  double ans = M_PI * 2 * r;
  printf("%lf", ans);
  return 0;
}
