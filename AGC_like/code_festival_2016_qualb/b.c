#include <stdio.h>

int main(void)
{
  int n, a, b;
  scanf("%d %d %d", &n, &a, &b);
  char s[n];
  int i = 0;
  int frg = 0;
  int pass = 0;
  while (i < n)
  {
    scanf("%s", &s[i]);
    if (s[i] == 'a')
    {
      if (pass < a + b)
      {
        printf("Yes\n");
        pass++;
      }
      else
        printf("No\n");
    }
    else if (s[i] == 'b')
    {
      frg++;
      if ((pass < a + b) && (frg <= b))
      {
        printf("Yes\n");
        pass++;
      }
      else
        printf("No\n");
    }
    else if (s[i] == 'c')
      printf("No\n");
    i++;
  }
  return 0;
}
