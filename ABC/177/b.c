#include <string.h>
int main()
{
  char s[1001], t[1001];
  scanf("%s %s", s, t);
  int i, j;
  int tlen = strlen(t);
  int ans = tlen;
  int cnt;
  for (i = 0; s[i + tlen - 1] != '\0'; i++)
  {
    cnt = 0;
    for (j = 0; t[j] != '\0'; j++)
    {
      if (s[i + j] != t[j])
        cnt++;
    }
    if (cnt < ans)
      ans = cnt;
  }
  printf("%d", ans);
}
