int main()
{
  int n;
  scanf("%d", &n);
  int x[n], y[n];
  int i;
  for (i = 0; i < n; i++)
    scanf("%d %d", &x[i], &y[i]);
  int j, k;
  long x1, x2, y1, y2;
  for (i = 0; i < n - 2; i++)
  {
    for (j = i + 1; j < n - 1; j++)
    {
      for (k = j + 1; k < n; k++)
      {
        x1 = x[j] - x[i];
        x2 = x[k] - x[i];
        y1 = y[j] - y[i];
        y2 = y[k] - y[i];
        if (x2 * y1 == x1 * y2)
        {
          printf("Yes\n");
          return 0;
        }
      }
    }
  }
  printf("No\n");
}
