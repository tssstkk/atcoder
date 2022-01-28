int main()
{
  int n;
  scanf("%d", &n);
  char s[4];
  int i;
  int a = 0, w = 0, t = 0, r = 0;
  for (i = 0; i < n; i++)
  {
    scanf("%s", s);
    if (s[0] == 'A')
      a++;
    else if (s[0] == 'W')
      w++;
    else if (s[0] == 'T')
      t++;
    else if (s[0] == 'R')
      r++;
  }
  printf("AC x %d\nWA x %d\nTLE x %d\nRE x %d", a, w, t, r);
}

