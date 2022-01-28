#include <math.h>
int main()
{
  double r, x, y;
  scanf("%lf %lf %lf", &r, &x, &y);
  double d;
  d = sqrt(x*x + y*y);
  if (d == r)
    printf("1\n");
  else if (d <= 2 * r)
    printf("2\n");
  else
    printf("%d\n", (int)ceil(d / r));
}
