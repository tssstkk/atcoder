int main()
{
  int n, m;
  scanf("%d %d", &n, &m);
  int h[n], a[m], b[m], i;
  int ans[n];
  for (i = 0; i < n; i++)
    ans[i] = 1;
  for (i = 0; i < n; i++)
    scanf("%d", &h[i]);
  for (i = 0; i < m; i++)
  {
    scanf("%d %d", &a[i], &b[i]);
    if (h[a[i]-1] > h[b[i]-1])
    {
      ans[a[i] - 1] *= 1;
      ans[b[i] - 1] = -1;
    }
    else if (h[a[i]-1] < h[b[i]-1])
    {
      ans[a[i] - 1] = -1;
      ans[b[i] - 1] *= 1;
    }
    else if (h[a[i]-1] == h[b[i]-1])
    {
      ans[a[i] - 1] = -1;
      ans[b[i] - 1] = -1;
    }
  }
  
  int cnt = 0;
  for (i = 0; i < n; i++)
  {
    if (ans[i] > 0)
    {
      cnt++;
    }
  }
  printf("%d", cnt);
}
