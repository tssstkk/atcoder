int main()
{
  int n;
  scanf("%d", &n);
  long a[n];
  long i, sum = 1;
  for (i = 0; i < n; i++)
  {
    scanf("%ld", &a[i]);
    if (a[i] == 0)
    {
      printf("0");
      return 0;
    }
  }
  long max = pow(10, 18);
  for (i = 0; i < n; i++)
  {
    if (sum <= max / a[i])
      sum *= a[i];
    else
    {
      printf("-1");
      return 0;
    }
  }
  printf("%ld", sum);
}
