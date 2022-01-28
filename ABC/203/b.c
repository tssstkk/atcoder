int main()
{
  int n, k;
  scanf("%d %d", &n, &k);
  int i, j;
  int tmp;
  long ans = 0;
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= k; j++)
    {
      tmp = 100;
      tmp = tmp * i;
      tmp = tmp + j;
      ans += tmp;
    }
  }
  printf("%ld", ans);
}
