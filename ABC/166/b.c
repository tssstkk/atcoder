int main()
{
  int n, k;
  scanf("%d %d", &n, &k);
  int a[k][n], d, cnt[n], i, m;
  for (i = 0; i < n; i++)
    cnt[i] = 0;
  for (i = 0; i < k; i++)
  {
    scanf("%d", &d);
    for (m = 0; m < d; m++)
    {
      scanf("%d", &a[i][m]);
      cnt[a[i][m] - 1] = 1;
    }
  }
  
  int ans = 0;
  for (i = 0; i < n; i++)
  {
    if (cnt[i] == 0)
    {
      ans++;
    }
  }
  printf("%d", ans);
}

