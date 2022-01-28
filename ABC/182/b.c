int main()
{
  int n;
  scanf("%d", &n);
  int a[n], i, max = 0, cnt = 0;
  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
    if (a[i] % 2 == 0)
      cnt++;
    if (max < a[i])
      max = a[i];
  }
  int j, tmp = 0, ans = 2;
  for (i = 3; i <= max; i += 2)
  {
    tmp = 0;
    for (j = 0; j < n; j++)
    {
      if (a[j] % i == 0)
        tmp++;
    }
    if (cnt < tmp)
    {
      cnt = tmp;
      ans = i;
    }
  }
  printf("%d", ans);
}
