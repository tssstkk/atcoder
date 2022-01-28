int main()
{
  char s[4];
  scanf("%s", s);
  int i;
  int cnt = 0, ans = 0, flg = 0;
  for (i = 0; s[i] != '\0'; i++)
  {
    if (s[i] == 'S')
      flg = 0;
    else if (s[i] == 'R')
    {
      if (flg == 0)
        cnt = 0;
      cnt++;
      flg = 1;
      if (cnt > ans)
        ans = cnt;
    }
  }
  printf("%d", ans);
}
