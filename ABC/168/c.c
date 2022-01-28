#include <math.h>
int main()
{
  int a, b, h, m;
  scanf("%d %d %d %d", &a, &b, &h, &m);
  
  double l, s;
  l = h * 30 + (double)m / 2;
  s = 6 * m;
  double tmp;
  tmp = fabs(l - s);
  double c;
  c = sqrt(a * a + b * b - 2 * a * b * cos(tmp * M_PI / 180));
  printf("%.10lf", c);
}

