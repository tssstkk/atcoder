#include <stdio.h>
#include <string.h>

int main(void)
{
  char s[100];
  scanf("%s", &s);
  
  int n;
  n = strlen(s);
  
  int i = 0;
  int k = n - 1;
  while (i < n / 2)
  {
    if (s[i] != s[k])
    {
      printf("No");
      return 0;
    }
    i++;
    k--;
  }
  
  int s2, s3;
  s2 = (n - 1) / 2 - 1;
  s3 = (n + 3) / 2 - 1;
  i = 0;
  k = n - 1;
  while (i < n / 2)
  {
    if (s[i] != s[s2] || s[s3] != s[k])
    {
      printf("No");
      return 0;
    }
    i++;
    s2--;
    s3++;
    k--;
  }
  
  printf("Yes");
  return 0;
}

