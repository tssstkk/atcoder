int main()
{
  int n, q;
  scanf("%d %d", &n, &q);
  long long a, b;
  int i;
  long long sum[n];
  for (i = 0; i < n; i++)
  {
    scanf("%lld", &a);
    if (i > 0)
      sum[i] = a - b - 1 + sum[i - 1];
    else
      sum[i] = a - 1;
    b = a;
  }
  
  long long k;
  int mid = n / 2, high = n, low = -1;
  for (i = 0; i < q; i++)
  {
    scanf("%lld", &k);

    mid = n / 2;
    high = n;
    low = -1;
    // nibutan
    while (low + 1 != high)
    {
      mid = (low + high) / 2;
      if (k <= sum[mid])
        high = mid;
      else if (k > sum[mid])
        low = mid;
    }
    printf("%lld\n", k + low + 1);
  }
}
