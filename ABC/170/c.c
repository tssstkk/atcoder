int main()
{
  int x, n;
  scanf("%d %d", &x, &n);
  int p[n], i;
  int a[101];
  int ans = x;
  int cnt = 0;
  for (i = 0; i <= 100; i++)
    a[i] = i;
  
  for (i = 0; i < n; i++)
  {
    scanf("%d", &p[i]);
    a[p[i] - 1] = -1;
  }
  
  for (i = 0; i <= 100; i++)
  {
    if (a[x - 1 - i] >= 0)
    {
      printf("%d", x - i);
      return 0;
    }
    if (a[x - 1 + i] >= 0)
    {
      printf("%d", x + i);
      return 0;
    }
  }
}
