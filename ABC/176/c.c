int main()
{
  long n;
  scanf("%ld", &n);
  long a[n];
  long i;
  long sum = 0;
  for (i = 0; i < n; i++)
  {
    scanf("%ld", &a[i]);
    if (i >= 1)
    {
      if (a[i] < a[i - 1])
      {
        sum += a[i - 1] - a[i];
        a[i] = a[i - 1];
      }
    }
  }
  printf("%ld", sum);
}
