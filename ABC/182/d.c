int main()
{
  long long n;
  scanf("%lld", &n);
  long a[n], i, j;
  long ans = 0, now = 0, p[n], q[n];
  p[0] = 0;
  for (i = 0; i < n; i++)
  {
    scanf("%ld", &a[i]);
    if (i == 0)
    {
      p[i] = a[i];
      if (a[i] > 0)
        q[i] = a[i];
      else
        q[i] = 0;
    }
    else
    {
      p[i] = p[i - 1] + a[i];
      if (p[i] > q[i - 1])
        q[i] = p[i];
      else
        q[i] = q[i - 1];
    }
  }
  for (i = 0; i < n; i++)
  {
    if (ans < now + q[i])
      ans = now + q[i];
    now = now + p[i];
  }
  printf("%ld", ans);
}
