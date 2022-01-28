#include <math.h>
int main()
{
  int n;
  scanf("%d", &n);
  int x, y, z;
  int minx;
  int i, count;
  for (i = 1; i <= n; i++)
  {
    count = 0;
    x = sqrt(i - 2) - 1;
    y = x;
    z = y;
    minx = sqrt(i / 6);
    while (x >= minx && x >= 1)
    {
      y = x;
      while (y >= 1)
      {
        z = y;
        while (z >= 1)
        {
          if (x*x + y*y + z*z + x*y + y*z + z*x == i)
          {
            if (x != y && y != z)
              count += 6;
            else if ((x != y && y == z) || (x == y && y != z))
              count += 3;
            else if (x == y && y == z)
              count++;
          }
          z--;
        }
        y--;
      }
      x--;
    }
    
    printf("%d\n", count);
  }
}

