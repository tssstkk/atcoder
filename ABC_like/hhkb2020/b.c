int main()
{
  int h, w;
  scanf("%d %d\n", &h, &w);
  char s[h][w];
  int i, j, cnt = 0;
  for (i = 0; i < h; i++)
  {
    for (j = 0; j < w; j++)
    {
      scanf("%c", &s[i][j]);
      if (s[i][j] == '.')
      {
        if (j >= 1 && s[i][j - 1] == '.')
          cnt++;
        if (i >= 1 && s[i - 1][j] == '.')
          cnt++;
      }
      scanf("\n");
    }
  }
  printf("%d", cnt);
}
