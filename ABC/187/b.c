int main()
{
  int n;
  scanf("%d", &n);
  int x[n], y[n], i, j, cnt = 0;
  for (i = 0; i < n; i++)
    scanf("%d %d", &x[i], &y[i]);
  for (i = 0; i + 1 < n; i++)
    for (j = i + 1; j < n; j++)
      if (abs(y[j] - y[i]) <= abs(x[j] - x[i]))
        cnt++;
  printf("%d", cnt);
}
