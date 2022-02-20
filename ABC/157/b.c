#include <stdio.h>

int main(void)
{
  int a[3][3];
  int i, j, n, k, b;
  i = 0;
  while (i < 3)
  {
    j = 0;
    while (j < 3)
    {
      scanf("%d", &a[i][j]);
      j++;
    }
    i++;
  }
  
  scanf("%d", &n);
  
  k = 0;
  while (k < n)
  {
    scanf("%d", &b);
    i = 0;
    while (i < 3)
    {
      j = 0;
      while (j < 3)
      {
        if (a[i][j] == b)
        {
          a[i][j] = 0;
        }
        j++;
      }
      i++;
    }
    k++;
  }
  
  i = 0;
  j = 0;
  while (i < 3 && j < 3)
  {
    if ((a[0][j] + a[1][j] + a[2][j] == 0) || (a[i][0] + a[i][1] + a[i][2] == 0))
    {
      printf("Yes");
      return 0;
    }
    i++;
    j++;
  }
  
  if ((a[0][0] + a[1][1] + a[2][2] == 0) || (a[0][2] + a[1][1] + a[2][0] == 0))
  {
    printf("Yes");
    return 0;
  }
  
  printf("No");
  return 0;
}
